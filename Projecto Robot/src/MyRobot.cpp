#include"MyRobot.h"
#include "CGFapplication.h"
#include<iostream>

#define pi acos(-1.0)


MyRobot:: MyRobot(){
	angle=-150;
	x=8;
	z=8.5;
	increment=0.2;
	calcVertexBase();
	calcVertexTop();
	stacks=5;
}

void MyRobot:: calcVertexBase(){
	Vertex vertex;
	vertex.x= -0.5;
	vertex.y= 0;
	vertex.z= 0.5;

	for(unsigned int i=0; i<13; i++){//only save xx and zz information. yy is alaways 0

		vertexBase.push_back(vertex);

		if(i<=3)
			vertex.x +=(float)1/3;
		else if(i>3 && i<=6)
			vertex.z -=(float)1/3;
		else if(i>6 && i<=9)
			vertex.x -=(float)1/3;
		else if(i>9 && i<=11)
			vertex.z+=(float)1/3;
		else
			vertex=vertexBase[0];
	}
}

void MyRobot:: calcVertexTop(){
	float alpha = (float)3/4*pi;
	float inc= pi/6;
	Vertex vertex;

	for(unsigned int i=0; i<13; i++){//only save xx and zz information. yy is alaways 1
		if(i==12)
			vertex=vertexTop[0];
		else{
			vertex.x = 0.25*cos(alpha + inc*i);//xx
			vertex.y = 1; //yy
			vertex.z = 0.25*sin(alpha + inc*i);//zz
		}

		vertexTop.push_back(vertex);
	}
}

void MyRobot:: draw(){

	glTranslatef(x, 0, z);
	glRotatef(angle,0,1,0);
	/*
	glBegin(GL_TRIANGLES);
	glVertex3f(0.5, 0.3, 0);
	glVertex3f(-0.5, 0.3, 0);
	glVertex3f(0, 0.3, 2);
	glEnd();*/


	for(int j=0; j<stacks ; j++){
		glBegin(GL_TRIANGLE_STRIP);
		for(unsigned i=0; i<13; i++){
			if(i!=12){
				glNormal3f(vertexBase[i].x - j * (vertexBase[i].x - vertexTop[i].x) / stacks,
					vertexBase[i].y + j * (1.0 / stacks),
					vertexBase[i].z - j * (vertexBase[i].z - vertexTop[i].z) / stacks);

				glVertex3f(vertexBase[i].x - j * (vertexBase[i].x - vertexTop[i].x) / stacks,
					vertexBase[i].y + j * (1.0 / stacks),
					vertexBase[i].z - j * (vertexBase[i].z - vertexTop[i].z) / stacks);


				glNormal3f(vertexBase[i + 1].x - j * (vertexBase[i + 1].x - vertexTop[i + 1].x) / stacks,
					vertexBase[i + 1].y + j * (1.0 / stacks),
					vertexBase[i + 1].z - j * (vertexBase[i + 1].z - vertexTop[i + 1].z) / stacks);

				glVertex3f(vertexBase[i + 1].x - j * (vertexBase[i + 1].x - vertexTop[i + 1].x) / stacks,
					vertexBase[i + 1].y + j * (1.0 / stacks),
					vertexBase[i + 1].z - j * (vertexBase[i + 1].z - vertexTop[i + 1].z) / stacks);


				glNormal3f(vertexBase[i].x - (j + 1) * (vertexBase[i].x - vertexTop[i].x) / stacks,
					vertexBase[i].y + (j + 1) * (1.0 / stacks),
					vertexBase[i].z - (j + 1) * (vertexBase[i].z - vertexTop[i].z) / stacks);

				glVertex3f(vertexBase[i].x - (j + 1) * (vertexBase[i].x - vertexTop[i].x) / stacks,
					vertexBase[i].y + (j + 1) * (1.0 / stacks),
					vertexBase[i].z - (j + 1) * (vertexBase[i].z - vertexTop[i].z) / stacks);


				glNormal3f(vertexBase[i + 1].x - (j + 1) * (vertexBase[i + 1].x - vertexTop[i + 1].x) / stacks,
					vertexBase[i + 1].y + (j + 1) * (1.0 / stacks),
					vertexBase[i + 1].z - (j + 1) * (vertexBase[i + 1].z - vertexTop[i + 1].z) / stacks);

				glVertex3f(vertexBase[i + 1].x - (j + 1) * (vertexBase[i + 1].x - vertexTop[i + 1].x) / stacks,
					vertexBase[i + 1].y + (j + 1) * (1.0 / stacks),
					vertexBase[i + 1].z - (j + 1) * (vertexBase[i + 1].z - vertexTop[i + 1].z) / stacks);
			}else{
				glNormal3f(vertexBase[i].x - j * (vertexBase[i].x - vertexTop[i].x) / stacks,
					vertexBase[i].y + j * (1.0 / stacks),
					vertexBase[i].z - j * (vertexBase[i].z - vertexTop[i].z) / stacks);

				glVertex3f(vertexBase[i].x - j * (vertexBase[i].x - vertexTop[i].x) / stacks,
					vertexBase[i].y + j * (1.0 / stacks),
					vertexBase[i].z - j * (vertexBase[i].z - vertexTop[i].z) / stacks);


				glNormal3f(vertexBase[0].x - j * (vertexBase[i + 1].x - vertexTop[0].x) / stacks,
					vertexBase[0].y + j * (1.0 / stacks),
					vertexBase[0].z - j * (vertexBase[0].z - vertexTop[0].z) / stacks);

				glVertex3f(vertexBase[0].x - j * (vertexBase[0].x - vertexTop[0].x) / stacks,
					vertexBase[0].y + j * (1.0 / stacks),
					vertexBase[0].z - j * (vertexBase[0].z - vertexTop[0].z) / stacks);


				glNormal3f(vertexBase[i].x - (j + 1) * (vertexBase[i].x - vertexTop[i].x) / stacks,
					vertexBase[i].y + (j + 1) * (1.0 / stacks),
					vertexBase[i].z - (j + 1) * (vertexBase[i].z - vertexTop[i].z) / stacks);

				glVertex3f(vertexBase[i].x - (j + 1) * (vertexBase[i].x - vertexTop[i].x) / stacks,
					vertexBase[i].y + (j + 1) * (1.0 / stacks),
					vertexBase[i].z - (j + 1) * (vertexBase[i].z - vertexTop[i].z) / stacks);


				glNormal3f(vertexBase[0].x - (j + 1) * (vertexBase[0].x - vertexTop[0].x) / stacks,
					vertexBase[0].y + (j + 1) * (1.0 / stacks),
					vertexBase[0].z - (j + 1) * (vertexBase[0].z - vertexTop[0].z) / stacks);

				glVertex3f(vertexBase[0].x - (j + 1) * (vertexBase[0].x - vertexTop[0].x) / stacks,
					vertexBase[0].y + (j + 1) * (1.0 / stacks),
					vertexBase[0].z - (j + 1) * (vertexBase[0].z - vertexTop[0].z) / stacks);
			}
			glEnd();
		}
	}


	//draw vertexTop of the robot
	glPushMatrix();
	glBegin(GL_POLYGON);
	for(unsigned int i=0; i<13; i++){
		glNormal3f(0,1,0);
		glVertex3f(vertexTop[i].x, vertexTop[i].y, vertexTop[i].z);
	}
	glEnd();	
	glPopMatrix();

}

void MyRobot:: rotate(int direction){//if direction==0 rotate to the right, if 1 rotate to the left
	if(direction==1)
		angle+=3;
	else if(direction==0)
		angle-=3;
}

void MyRobot:: moveForward(){

	x+=increment*sin(angle*2*pi/360);
	z+=increment*cos(angle*2*pi/360);
}

void MyRobot:: moveBack(){

	x-=increment*sin(angle*2*pi/360);
	z-=increment*cos(angle*2*pi/360);
}
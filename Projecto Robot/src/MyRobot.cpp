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
	wireframe=0;
}

void MyRobot:: calcVertexBase(){
	Vertex vertex;
	vertex.x= -0.5;
	vertex.y= 0;
	vertex.z= 0.5;

	vertexBase.push_back(vertex);

	for(unsigned int i=1; i<13; i++){//only save xx and zz information. yy is alaways 0

		if(i<=3){
			vertex.x +=(float)1/3;
			vertex.y=0;
			vertex.z=0.5;
		}else if(i>3 && i<=6){
			vertex.x=0.5;
			vertex.y=0;
			vertex.z -=(float)1/3;
		}else if(i>6 && i<=9){
			vertex.x -=(float)1/3;
			vertex.y=0;
			vertex.z=-0.5;
		}else if(i>9 && i<=12){
			vertex.x=-0.5;
			vertex.y=0;
			vertex.z+=(float)1/3;
		}

		vertexBase.push_back(vertex);
	}
}

void MyRobot:: calcVertexTop(){
	float alpha = (float)3.0/4.0*pi;
	float inc= pi/6.0;
	Vertex vertex;

	for(unsigned int i=0; i<13; i++){//only save xx and zz information. yy is alaways 1
			vertex.x = 0.25*cos(alpha - inc*i);//xx
			vertex.y = 1; //yy
			vertex.z = 0.25*sin(alpha - inc*i);//zz

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

	if(wireframe == 1)
		glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	else
		glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	for(int j=0; j<stacks ; j++){
		glBegin(GL_TRIANGLE_STRIP);
		for(unsigned i=0; i<13; i++){

			glNormal3f(vertexBase[i].x - (j + 1) * (vertexBase[i].x - vertexTop[i].x) / stacks,
						   vertexBase[i].y + (j + 1) * (1.0 / stacks),
						   vertexBase[i].z - (j + 1) * (vertexBase[i].z - vertexTop[i].z) / stacks);

			glVertex3f(vertexBase[i].x - (j + 1) * (vertexBase[i].x - vertexTop[i].x) / stacks,
						   vertexBase[i].y + (j + 1) * (1.0 / stacks),
						   vertexBase[i].z - (j + 1) * (vertexBase[i].z - vertexTop[i].z) / stacks);
			
			glNormal3f(vertexBase[i].x - j * (vertexBase[i].x - vertexTop[i].x) / stacks,
						   vertexBase[i].y + j * (1.0 / stacks),
						   vertexBase[i].z - j * (vertexBase[i].z - vertexTop[i].z) / stacks);

			glVertex3f(vertexBase[i].x - j * (vertexBase[i].x - vertexTop[i].x) / stacks,
						   vertexBase[i].y + j * (1.0 / stacks),
						   vertexBase[i].z - j * (vertexBase[i].z - vertexTop[i].z) / stacks);			
		}
		glEnd();
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


	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

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

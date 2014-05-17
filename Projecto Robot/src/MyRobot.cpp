#include"MyRobot.h"
#include "CGFapplication.h"

MyRobot:: MyRobot(){
	angle=-150;
	x=8;
	z=8.5;
	increment=0.2;
}

void MyRobot:: draw(){

	glTranslatef(x, 0, z);
	glRotatef(angle,0,1,0);

	glBegin(GL_TRIANGLES);
	glVertex3f(0.5, 0.3, 0);
	glVertex3f(-0.5, 0.3, 0);
	glVertex3f(0, 0.3, 2);
	glEnd();
}

float MyRobot:: getAngle(){
	return this->angle; 
}

void MyRobot:: setAngle(float angle){
	this->angle=angle;
}

float MyRobot:: getX(){
	return this->x;
}

void MyRobot:: setX(float x){
	this->x=x;
}

float MyRobot:: getZ(){
	return this->z;
}

void MyRobot:: setZ(float z){
	this->z=z;
}

void MyRobot:: rotate(int direction){//if direction==0 rotate to the right, if 1 rotate to the left
	if(direction==1)
		angle+=3;
	else if(direction==0)
		angle-=3;

	/*if(!( (0<angle && angle<360) || (-360 < angle && angle < 0))){ //removes complete laps
	float temp=angle/360;
	angle-=temp*360;
	}*/

	toPositiveAngle();
}

int MyRobot:: returnQuadrant(){

	if((0<=angle && angle<=90) || (-360<=angle && angle<=-270))
		return 1;
	else if((90<angle && angle<=180) || (-270<angle && angle<=-180))
		return 2;
	else if((180<angle && angle<=270) || (-180<angle && angle<=-90))
		return 3;
	else
		return 4;
}

void MyRobot:: toPositiveAngle(){
	angle = fmod(angle, 360);
	if (angle < 0) 
		angle += 360;
}

void MyRobot:: moveForward(){
	int quadrant=returnQuadrant();

	/*switch(quadrant){
	case 1:
	x+=increment*sin(angle);
	z+=increment*cos(angle);
	break;
	case 2:
	if(angle<0){
	x+=increment*cos(angle);
	z+=increment*sin(angle);
	}else{
	x+=increment*cos(angle-90);
	z+=increment*sin(angle-90);
	}
	break;
	case 3:
	if(angle<0){
	x+=increment*sin(angle);
	z+=increment*cos(angle);
	}else{
	x+=increment*sin(angle-180);
	z+=increment*cos(angle-180);
	}
	break;
	case 4:
	if(angle<0){
	x+=increment*cos(angle);
	z+=increment*sin(angle);
	}else{
	x+=increment*cos(angle-270);
	z+=increment*sin(angle-270);
	}
	break;
	}*/

	switch(quadrant){
	case 1:
		x+=increment*sin(angle);
		z+=increment*cos(angle);
		break;
	case 2:
		x+=increment*cos(angle-90);
		z+=increment*sin(angle-90);
		break;
	case 3:
		x+=increment*sin(angle-180);
		z+=increment*cos(angle-180);
		break;
	case 4:
		x+=increment*cos(angle-270);
		z+=increment*sin(angle-270);
		break;
	}

}

void MyRobot:: moveBack(){
	x+=increment*cos(angle);
	z+=increment*sin(angle);
}
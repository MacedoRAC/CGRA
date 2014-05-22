#include "myClockHand.h"


myClockHand:: myClockHand(float size){
	angle=0;
	this->size=size;
}

float myClockHand:: getAngle(){
	return angle;
}

void myClockHand:: setAngle(float ang){
	this->angle=ang;
}

void myClockHand:: draw(){
	glPushMatrix();
		glRotatef(this->getAngle(),0,0,1);
		glTranslatef(0,0,0.02);
		glBegin(GL_TRIANGLES);
			glNormal3f(0.0,0.0, 1.0); 
			glVertex3d(0.02, 0, 0); 
			glVertex3d(0,size,0);
			glVertex3d(-0.02, 0,0);
		glEnd();
	glPopMatrix();
}
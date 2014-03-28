#include "myUnitCube.h"

void myUnitCube:: draw(){

	//face frente
	glPushMatrix();
	glTranslatef(0,0,0.5);
	glNormal3f(0,0,1);
	myRectf(-0.5,-0.5,0.5,0.5);
	glPopMatrix();

	//face cima
	glPushMatrix();
	glTranslatef(0,0.5,0);
	glRotatef(270,1,0,0);
	glNormal3f(0,0,1);
	myRectf(-0.5,-0.5,0.5,0.5);
	glPopMatrix();

	//face direita
	glPushMatrix();
	glTranslatef(0.5,0,0);
	glRotatef(90,0,1,0);
	glNormal3f(0,0,1);
	myRectf(-0.5,-0.5,0.5,0.5);
	glPopMatrix();

	//face trás
	glPushMatrix();
	glTranslatef(0,0,-0.5);
	glRotatef(180,0,1,0);
	glNormal3f(0,0,1);
	myRectf(-0.5,-0.5,0.5,0.5);
	glPopMatrix();

	//face baixo
	glPushMatrix();
	glTranslatef(0,-0.5,0);
	glRotatef(-270,1,0,0);
	glNormal3f(0,0,1);
	myRectf(-0.5,-0.5,0.5,0.5);
	glPopMatrix();

	//face esquerda
	glPushMatrix();
	glTranslatef(-0.5,0,0);
	glRotatef(-90,0,1,0);
	glNormal3f(0,0,1);
	myRectf(-0.5,-0.5,0.5,0.5);
	glPopMatrix();
	
}


void myUnitCube:: myRectf(float x1, float y1, float x2, float y2){

	glBegin(GL_QUADS);
		glTexCoord2f(0,0);
		glVertex3f(x1,y1,0);

		glTexCoord2f(1,0);
		glVertex3f(x2,y1,0);

		glTexCoord2f(1,1);
		glVertex3f(x2,y2,0);
		
		glTexCoord2f(0,1);
		glVertex3f(x1,y2,0);

		
	glEnd();
}
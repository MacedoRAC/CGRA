#include "myUnitCube.h"

void myUnitCube:: draw(){

	//face frente
	glPushMatrix();
	glNormal3f(0,0,1);
	glTranslatef(0,0,0.5);
	glRectf(-0.5,-0.5,0.5,0.5);
	glPopMatrix();

	//face cima
	glPushMatrix();
	glNormal3f(0,0,1);
	glRotatef(90,1,0,0);
	glTranslatef(0,0.5,0);
	glRectf(-0.5,0.5,0.5,0.5);
	glPopMatrix();

	//face direita
	glPushMatrix();
	glNormal3f(0,0,1);
	glRotatef(90,0,1,0);
	glTranslatef(0.5,0,0);
	glRectf(-0.5,0.5,0.5,0.5);
	glPopMatrix();

	//face trás
	glPushMatrix();
	glNormal3f(0,0,1);
	glRotatef(180,0,1,0);
	glTranslatef(0,0,-0.5);
	glRectf(-0.5,-0.5,0.5,0.5);
	glPopMatrix();

	//face baixo
	glPushMatrix();
	glNormal3f(0,0,1);
	glRotatef(-90,1,0,0);
	glTranslatef(0,-0.5,0);
	glRotatef(180,1,0,0);
	glRectf(-0.5,0.5,0.5,0.5);
	glPopMatrix();

	//face esquerda
	glPushMatrix();
	glNormal3f(0,0,1);
	glRotatef(-90,0,1,0);
	glTranslatef(-0.5,0,0);
	glRotatef(180,0,0,1);
	glRectf(-0.5,0.5,0.5,0.5);
	glPopMatrix();
	
}
#include "myUnitCube.h"

void myUnitCube:: draw(){

	//face frente
	glPushMatrix();
	glTranslatef(0,0,0.5);
	glNormal3f(0,0,1);
	glRectf(-0.5,-0.5,0.5,0.5);
	glPopMatrix();

	//face cima
	glPushMatrix();
	glTranslatef(0,0.5,0);
	glRotatef(270,1,0,0);
	glNormal3f(0,0,1);
	glRectf(-0.5,-0.5,0.5,0.5);
	glPopMatrix();

	//face direita
	glPushMatrix();
	glTranslatef(0.5,0,0);
	glRotatef(90,0,1,0);
	glNormal3f(0,0,1);
	glRectf(-0.5,-0.5,0.5,0.5);
	glPopMatrix();

	//face trás
	glPushMatrix();
	glTranslatef(0,0,-0.5);
	glRotatef(180,0,1,0);
	glNormal3f(0,0,1);
	glRectf(-0.5,-0.5,0.5,0.5);
	glPopMatrix();

	//face baixo
	glPushMatrix();
	glTranslatef(0,-0.5,0);
	glRotatef(-270,1,0,0);
	glNormal3f(0,0,1);
	glRectf(-0.5,-0.5,0.5,0.5);
	glPopMatrix();

	//face esquerda
	glPushMatrix();
	glTranslatef(-0.5,0,0);
	glRotatef(-90,0,1,0);
	glNormal3f(0,0,1);
	glRectf(-0.5,-0.5,0.5,0.5);
	glPopMatrix();
	
}
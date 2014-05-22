#include"Impostor.h"


Impostor:: Impostor(){

	parts = myUnitCube();
}

void Impostor:: drawSquare(){
	float prop=(float)10/3;
	glPushMatrix();
		glRotatef(-90,0,1,0);
		glScalef(5,prop,0.1);
		parts.draw();
	glPopMatrix();
}

void Impostor:: draw(){
	float prop=(float)10/3;

	//rightBottom
	glPushMatrix();
		glTranslatef(0,prop/2,2.5);
		drawSquare();
	glPopMatrix();

	//rightMiddle
	glPushMatrix();
		glTranslatef(0,prop + prop/2,2.5);
		drawSquare();
	glPopMatrix();

	//rightTop
	glPushMatrix();
		glTranslatef(0,2*prop + prop/2,2.5);
		drawSquare();
	glPopMatrix();

	//middleBottom
	glPushMatrix();
		glTranslatef(0,prop/2,7.5);
		drawSquare();
	glPopMatrix();

	//middleTop
	glPushMatrix();
		glTranslatef(0, 2*prop + prop/2, 7.5);
		drawSquare();
	glPopMatrix();

	//leftBottom
	glPushMatrix();
		glTranslatef(0, prop/2, 12.5);
		drawSquare();
	glPopMatrix();

	//leftMiddle
	glPushMatrix();
		glTranslatef(0, prop + prop/2, 12.5);
		drawSquare();
	glPopMatrix();

	//leftMiddle
	glPushMatrix();
		glTranslatef(0, 2*prop + prop/2, 12.5);
		drawSquare();
	glPopMatrix();

}
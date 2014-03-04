#include "myChair.h"

void myChair:: draw(){

	//desenhar pernas
	glPushMatrix();
	glTranslatef(-0.75,0.75,0.85);
	glScalef(0.15,3.8,0.15);
	cube.draw();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.75,0.75,0.85);
	glScalef(0.15,3.8,0.15);
	cube.draw();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.75,0,-0.85);
	glScalef(0.15,2.3,0.15);
	cube.draw();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.75,0,-0.85);
	glScalef(0.15,2.3,0.15);
	cube.draw();
	glPopMatrix();

	//desenhar tampo da cadeira (sitio onde se senta)
	glPushMatrix();
	glTranslatef(0,1.16,0);
	glScalef(1.65,0.05,1.85);
	cube.draw();
	glPopMatrix();

	//desenhar encosto
	glPushMatrix();
	glTranslatef(0,2.425,0.76);
	glScalef(1.65,0.45,0.05);
	cube.draw();
	glPopMatrix();
}
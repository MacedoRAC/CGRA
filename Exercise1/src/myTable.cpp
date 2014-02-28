#include "myTable.h"


void myTable:: draw(){
	
	//desenhar pernas
	glPushMatrix();
	glTranslatef(0.5,1.75,0.5);
	glScalef(0.3,3.5,0.3);
	cube.draw();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(5.15,1.75,0.5);
	glScalef(0.3,3.5,0.3);
	cube.draw();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5,1.75,3.15);
	glScalef(0.3,3.5,0.3);
	cube.draw();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(5.15,1.75,3.15);
	glScalef(0.3,3.5,0.3);
	cube.draw();
	glPopMatrix();

	//desenhar tampo (parte de cima da mesa)

	glPushMatrix();
	glTranslatef(2.85,3.65,1.85);
	glScalef(5,0.3,3);
	cube.draw();
	glPopMatrix();

}
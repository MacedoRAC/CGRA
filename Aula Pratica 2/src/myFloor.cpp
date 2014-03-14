#include "myFloor.h"

void myFloor:: draw(){

	//desenhar chao
	glPushMatrix();
	glTranslatef(4,-0.05,3);
	glScalef(8,0.1,6);
	cube.draw();
	glPopMatrix();

}
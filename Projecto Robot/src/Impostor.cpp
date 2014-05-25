#include"Impostor.h"


Impostor:: Impostor(){

	parts = myUnitCube();
}

/*void Impostor:: drawSquare(){
	float prop=(float)10/3;
	glPushMatrix();
		glRotatef(-90,0,1,0);
		glScalef(5,prop,0.1);
		parts.draw();
	glPopMatrix();
}*/

void Impostor:: draw(){
	float prop=(float)10/3;

	//rightBottom
	glPushMatrix();
		glNormal3f(1,0,0);
		glBegin(GL_QUADS);
			glVertex3f(0,0,0);
			glVertex3f(0,prop,0);
			glTexCoord2f(0.95, 0.05);
			glVertex3f(0,prop,5);
			glVertex3f(0,0,5);
		glEnd();
	glPopMatrix();

	//rightMiddle
	glPushMatrix();
		glNormal3f(1,0,0);
		glBegin(GL_QUADS);
			glVertex3f(0,prop,0);
			glVertex3f(0,2*prop,0);
			glVertex3f(0,2*prop,5);
			glVertex3f(0,prop,5);
		glEnd();
	glPopMatrix();

	//rightTop
	glPushMatrix();
		glNormal3f(1,0,0);
		glBegin(GL_QUADS);
			glVertex3f(0,2*prop,0);
			glVertex3f(0,3*prop,0);
			glVertex3f(0,3*prop,5);
			glTexCoord2f(0.95, 0.90);
			glVertex3f(0,2*prop,5);
		glEnd();
	glPopMatrix();

	//middleBottom
	glPushMatrix();
		glNormal3f(1,0,0);
		glBegin(GL_QUADS);
			glVertex3f(0,0,5);
			glVertex3f(0,prop,5);
			glVertex3f(0,prop,10);
			glVertex3f(0,0,10);
		glEnd();
	glPopMatrix();

	//middleTop
	glPushMatrix();
		glNormal3f(1,0,0);
		glBegin(GL_QUADS);
			glVertex3f(0,2*prop,5);
			glVertex3f(0,3*prop,5);
			glVertex3f(0,3*prop,10);
			glVertex3f(0,2*prop,10);
		glEnd();
	glPopMatrix();

	//leftBottom
	glPushMatrix();
		glNormal3f(1,0,0);
		glBegin(GL_QUADS);
			glVertex3f(0,0,10);
			glTexCoord2f(0.05,0.05);
			glVertex3f(0,prop,10);
			glVertex3f(0,prop,15);
			glVertex3f(0,0,15);
		glEnd();
	glPopMatrix();

	//leftMiddle
	glPushMatrix();
		glNormal3f(1,0,0);
		glBegin(GL_QUADS);
			glVertex3f(0,prop,10);
			glVertex3f(0,2*prop,10);
			glVertex3f(0,2*prop,15);
			glVertex3f(0,prop,15);
		glEnd();
	glPopMatrix();

	//leftTop
	glPushMatrix();
		glNormal3f(1,0,0);
		glBegin(GL_QUADS);
			glTexCoord2f(0.03,0.90);
			glVertex3f(0,2*prop,10);
			glVertex3f(0,3*prop,10);
			glVertex3f(0,3*prop,15);
			glVertex3f(0,2*prop,15);
		glEnd();
	glPopMatrix();

}
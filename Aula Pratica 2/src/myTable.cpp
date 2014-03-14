#include "myTable.h"
#include "CGFappearance.h"

void myTable:: draw(){
	// Coefficients for material C
float ambC[3] = {0.2, 0.2, 0.2};
float difC[3] = {1,0.5,0.25};
float specC[3] = {0.1, 0.05, 0.025};
float shininessC = 120.f;

CGFappearance* materialC = new CGFappearance(ambC,difC,specC,shininessC);

	// Coefficients for material D
float ambD[3] = {0.2, 0.2, 0.2};
float difD[3] = {0.5,0.5,0.5};
float specD[3] = {0.9, 0.9, 0.9};
float shininessD = 120.f;

CGFappearance* materialD = new CGFappearance(ambD,difD,specD,shininessD);
	//desenhar pernas
	glPushMatrix();
	materialD->apply();
	glTranslatef(-2.35,1.75,-1.35);
	glScalef(0.3,3.5,0.3);
	cube.draw();
	glPopMatrix();

	glPushMatrix();
	materialD->apply();
	glTranslatef(2.35,1.75,-1.35);
	glScalef(0.3,3.5,0.3);
	cube.draw();
	glPopMatrix();

	glPushMatrix();
	materialD->apply();
	glTranslatef(-2.35,1.75,1.35);
	glScalef(0.3,3.5,0.3);
	cube.draw();
	glPopMatrix();

	glPushMatrix();
	materialD->apply();
	glTranslatef(2.35,1.75,1.35);
	glScalef(0.3,3.5,0.3);
	cube.draw();
	glPopMatrix();

	//desenhar tampo (parte de cima da mesa)

	glPushMatrix();
	materialC->apply();
	glTranslatef(0,3.65,0);
	glScalef(5,0.3,3);
	cube.draw();
	glPopMatrix();

}
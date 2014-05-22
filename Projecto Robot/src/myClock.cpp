#include"myClock.h"

	float amb[3] = {0.4, 0.4, 0.4};
	float dif[3] = {0.6, 0.6, 0.6};
	float spec[3] = {0.2, 0.2, 0.2};
	float shininess = 120.f;


myClock:: myClock(){
	clock= new myCylinder(12,1,true);
	hours = new myClockHand(0.25);
	minutes = new myClockHand(0.5);
	seconds = new myClockHand(0.75);

	handClockTexture=new CGFappearance(amb,dif,spec,shininess);
	handClockTexture->setTexture("handClock.png");
}

void myClock:: update(unsigned long time){
	float miliseconds = (float)time/150;
	this->hours->setAngle(-miliseconds/3600);
	this->minutes->setAngle(-miliseconds/60);
	this->seconds->setAngle( -miliseconds);
}

void myClock:: draw(){
	
	glPushMatrix();
		glRotatef(-90,1,0,0);
		glScalef(1,0.3,1);
		clock->draw();
	glPopMatrix();
	
	glPushMatrix();
	handClockTexture->apply();
		hours->draw();
		minutes->draw();
		seconds->draw();
	glPopMatrix();
}
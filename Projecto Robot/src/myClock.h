#ifndef MYCLOCK_H_
#define MYCLOCK_H_

#include"myCylinder.h"
#include"myClockHand.h"
#include"CGFappearance.h"

class myClock{
	myCylinder* clock;
	myClockHand* hours;
	myClockHand* minutes;
	myClockHand* seconds;
	CGFappearance* handClockTexture;


public:
	myClock();
	void draw();
	void update();
	void update(unsigned long);
};

#endif
#ifndef MYCLOCKHAND_H_
#define MYCLOCKHAND_H_

#include"myUnitCube.h"

class myClockHand{
	float angle;
	float size;
public:
	myClockHand(float size);
	float getAngle();
	void setAngle(float ang);
	void draw();
};

#endif
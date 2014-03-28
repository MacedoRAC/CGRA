#ifndef MYFLOOR_H
#define MYFLOOR_H

#include "CGFobject.h"
#include "myUnitCube.h"

class myFloor: public CGFobject{
	myUnitCube cube;

public:
	void draw();
};

#endif
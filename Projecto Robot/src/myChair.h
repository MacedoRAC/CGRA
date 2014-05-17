#ifndef MYCHAIR_H
#define MYCHAIR_H

#include "CGFscene.h"
#include "myUnitCube.h"

class myChair: public CGFscene{
	myUnitCube cube;
public:
	void draw();
};


#endif
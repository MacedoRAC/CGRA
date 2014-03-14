#ifndef MYTABLE_H
#define MYTABLE_H

#include "CGFobject.h"
#include "myUnitCube.h"

class myTable: public CGFobject{

	myUnitCube cube;

public:
	void draw();
	 
};


#endif
#ifndef MYTABLE_H
#define MYTABLE_H

#include "CGFobject.h"
#include "myUnitCube.h"
#include "CGFappearance.h"

class myTable: public CGFobject{

	myUnitCube cube;
	CGFappearance* materialC;
	CGFappearance* materialD;
	CGFappearance* tableAppearance; 
public:
	myTable();
	void draw();
	 
};


#endif
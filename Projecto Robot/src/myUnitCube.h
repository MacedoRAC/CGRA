#ifndef MYUNITCUBE_H
#define MYUNITCUBE_H

#include "CGFobject.h"

class myUnitCube: public CGFobject {
	public:
		void draw();
		void myRectf(float x1, float y1, float x2, float y2);
};

#endif
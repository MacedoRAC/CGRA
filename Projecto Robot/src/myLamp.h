#ifndef MY_LAMP
#define MY_LAMP

#include "CGF/CGFobject.h"

class myLamp : public CGFobject {
	int slices;
	int stacks;
	float angle;
	float verticalAngle;
	bool smooth;
	public:
		myLamp(int slices, int stacks, bool smooth);
		void draw();

};



#endif

#include"myLamp.h"
#include<math.h>

myLamp::myLamp(int slices, int stacks, bool smooth) {

	this->slices=slices;
	this->stacks=stacks;
	this->smooth=smooth;
	angle=2*acos(-1.0)/slices;
}

void myLamp:: draw(){
	int radius=1;

	for(unsigned int j=0; j<stacks ; j++){
		for(unsigned int i=0; i<slices ; i++){
			glBegin(GL_LINE_LOOP);
				if(!smooth){
					glNormal3d(cos(angle*i), j, sin(angle*i));
					glVertex2f(cos(angle*i)*radius,sin(angle*i)*radius);
					radius=radius-0.1;
				}
				else{
					glVertex2f(cos(angle*i)*radius,sin(angle*i)*radius);
					radius=radius-0.1;
				}
			glEnd();
		}
	}
}
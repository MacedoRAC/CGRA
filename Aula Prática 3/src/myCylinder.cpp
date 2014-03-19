#include "myCylinder.h"
#include <math.h>

myCylinder::myCylinder(int slices, int stacks, bool smooth) {

	this->slices=slices;
	this->stacks=stacks;
	this->smooth=smooth;
	angle=2*acos(-1.0)/slices;
}

void myCylinder:: draw(){

	for(unsigned int j=0; j<stacks ; j++){
		for(unsigned int i=0; i<slices ; i++){
			glBegin(GL_QUADS);
				if(!smooth){
					glNormal3d(cos(angle*i), j, sin(angle*i));
					glVertex3d(cos(angle*i), j, sin(angle*i));
					glVertex3d(cos(angle*i), j+1, sin(angle*i));
					glVertex3d(cos(angle*(i+1)), j+1, sin(angle*(i+1)));
					glVertex3d(cos(angle*(i+1)), j, sin(angle*(i+1)));
				}
				else{
					glVertex3d(cos(angle*i), j, sin(angle*i));
					glVertex3d(cos(angle*i), j+1, sin(angle*i));
					glVertex3d(cos(angle*(i+1)), j+1, sin(angle*(i+1)));
					glVertex3d(cos(angle*(i+1)), j, sin(angle*(i+1)));
				}
			glEnd();
		}
	}
}
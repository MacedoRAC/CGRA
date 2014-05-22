#include"myLamp.h"
#include<math.h>

myLamp::myLamp(int slices, int stacks, bool smooth) {

	this->slices=slices;
	this->stacks=stacks;
	this->smooth=smooth;
	angle=2*acos(-1.0)/slices;
	verticalAngle=acos(-1.0)/2.0/stacks;
}

void myLamp:: draw(){
	int radius=1;
	float inc=1.0/stacks;

	for(float j=0; j<1 ; j+=inc){
		for(int i=0; i<slices ; i++){
			glBegin(GL_QUADS);
				if(!smooth){
					
				}
				else{
					glNormal3d(cos(angle*i)*sin(verticalAngle*j), sin(verticalAngle*j)*j, sin(angle*i)*sin(verticalAngle*j));
					glVertex3d(cos(angle*i)*sin(verticalAngle*j), sin(verticalAngle*j)*j, sin(angle*i)*sin(verticalAngle*j));
					
					glNormal3d(cos(angle*i)*sin(verticalAngle*(j+inc)), sin(verticalAngle*(j+inc))*(j+inc), sin(angle*i)*sin(verticalAngle*(j+inc)));
					glVertex3d(cos(angle*i)*sin(verticalAngle*(j+inc)), sin(verticalAngle*(j+inc))*(j+inc), sin(angle*i)*sin(verticalAngle*(j+inc)));
					
					glNormal3d(cos(angle*(i+1))*sin(verticalAngle*(j+inc)), sin(verticalAngle*(j+inc))*(j+inc), sin(angle*(i+1))*sin(verticalAngle*(j+inc)));
					glVertex3d(cos(angle*(i+1))*sin(verticalAngle*(j+inc)), sin(verticalAngle*(j+inc))*(j+inc), sin(angle*(i+1))*sin(verticalAngle*(j+inc)));
					
					glNormal3d(cos(angle*(i+1))*sin(verticalAngle*j), sin(verticalAngle*j)*j, sin(angle*(i+1))*sin(verticalAngle*j));
					glVertex3d(cos(angle*(i+1))*sin(verticalAngle*j), sin(verticalAngle*j)*j, sin(angle*(i+1))*sin(verticalAngle*j));
				}
			glEnd();
		}
	}
}
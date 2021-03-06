#include "myCylinder.h"
#include <math.h>

myCylinder::myCylinder(int slices, int stacks, bool smooth) {

	this->slices=slices;
	this->stacks=stacks;
	this->smooth=smooth;
	angle=2*acos(-1.0)/slices;
}

void myCylinder:: draw(){

	for(int j=0; j<stacks ; j++){
		for(int i=0; i<slices ; i++){
			glBegin(GL_QUADS);
			if(!smooth){
				glNormal3d(cos(angle*(i+0.5)), 0, sin(angle*(i+0.5)));
				glVertex3d(cos(angle*i), j, sin(angle*i));
				glVertex3d(cos(angle*i), j+1, sin(angle*i));
				glVertex3d(cos(angle*(i+1)), j+1, sin(angle*(i+1)));
				glVertex3d(cos(angle*(i+1)), j, sin(angle*(i+1)));
			}
			else{
				glNormal3d(cos(angle*i), 0, sin(angle*i));
				glVertex3d(cos(angle*i), j, sin(angle*i));
				glVertex3d(cos(angle*i), j+1, sin(angle*i));
				
				glNormal3d(cos(angle*(i+1)), 0, sin(angle*(i+1)));
				glVertex3d(cos(angle*(i+1)), j+1, sin(angle*(i+1)));
				glVertex3d(cos(angle*(i+1)), j, sin(angle*(i+1)));
			}
			glEnd();

			if(j==(stacks-1)){
				glBegin(GL_POLYGON);
				for(int k=0; k<slices; k++){
					glNormal3d(cos(angle*k), 0, sin(angle*k));
					glTexCoord2f((cos(angle*k)/2)+0.5, (sin(angle*k)/2)+0.5);
					glVertex3d(cos(angle*k), j, sin(angle*k));	
				}
				glEnd();
			}
		}
	}
}
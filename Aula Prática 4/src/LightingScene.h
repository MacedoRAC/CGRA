#ifndef LightingScene_H
#define LightingScene_H

#include "CGFscene.h"
#include "CGFappearance.h"
#include "myTable.h"
#include "Plane.h"
#include "myCylinder.h"
#include "myLamp.h"

class LightingScene : public CGFscene
{
public:
	void init();
	void display();

	CGFlight* light0;
	CGFlight* light1;
	CGFlight* light2;
	CGFlight* light3;

	myTable* table;
	Plane* wall;
	Plane* boardA;
	Plane* boardB;
	myCylinder* cylinder1;
	myCylinder* cylinder2;
	myLamp* lamp1;
	CGFappearance* materialA;
	CGFappearance* materialB;
	CGFappearance* materialC;
	CGFappearance* materialD;
	CGFappearance* slidesAppearance;
	CGFappearance* boardAppearance;

	~LightingScene();
};

#endif
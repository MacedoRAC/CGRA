#ifndef LightingScene_H
#define LightingScene_H

#include "CGFscene.h"
#include "CGFappearance.h"
#include "myTable.h"
#include "Plane.h"
#include "myCylinder.h"
#include "myLamp.h"
#include "MyRobot.h"

class LightingScene : public CGFscene
{
public:
	void init();
	void display();
	void toggleSomething();
	void setLight0();
	void setLight1();
	void setLight2();
	void setLight3();

	CGFlight* light0;
	CGFlight* light1;
	CGFlight* light2;
	CGFlight* light3;

	myTable* table;
	Plane* wall;
	Plane* boardA;
	Plane* boardB;
	Plane* floor;
	myCylinder* cylinder1;
	myCylinder* cylinder2;
	myLamp* lamp1;
	CGFappearance* materialA;
	CGFappearance* materialB;
	CGFappearance* materialC;
	CGFappearance* materialD;
	CGFappearance* slidesAppearance;
	CGFappearance* boardAppearance;
	CGFappearance* windowAppearance;
	CGFappearance* floorAppearance;
	MyRobot* robot;

	int sceneVar;

	~LightingScene();
};

#endif
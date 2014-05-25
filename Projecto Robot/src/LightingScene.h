#ifndef LightingScene_H
#define LightingScene_H

#include "CGFscene.h"
#include "CGFappearance.h"
#include "myTable.h"
#include "Plane.h"
#include "myCylinder.h"
#include "myLamp.h"
#include "MyRobot.h"
#include "myClock.h"
#include "Impostor.h"

class LightingScene : public CGFscene
{
public:
	void init();
	void display();
	void toggleSomething();
	virtual void update(unsigned long);
	void setClockSwitcher();

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
	CGFappearance* landscapeAppearance;
	CGFappearance* floorAppearance;
	CGFappearance* clockAppearance;
	CGFappearance* robotAppearance;
	CGFappearance* window;
	MyRobot* robot;
	myClock* clock;
	Impostor* impostor;
	Plane* landscape;

	int sceneVar;
	int l0, l1, l2, l3; //lights' switchers
	int clockSwitcher;
	int skinRobot;
	int landscapeOptions;

	~LightingScene();
};

#endif
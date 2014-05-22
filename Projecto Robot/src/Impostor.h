#ifndef IMPOSTOR_H_
#define IMPOSTOR_H_

#include"myUnitCube.h"

using namespace std;

class Impostor{
	myUnitCube parts;
	
public:
	Impostor();
	void draw();
	void drawSquare();
};

#endif
#pragma once

#include "CGF/CGFobject.h"
class Plane
{
public:
	Plane(double si, double ti, double sf, double tf);
	Plane(int n, double si, double ti, double sf, double tf);
	~Plane(void);
	void draw();
private:
	int _numDivisions; // Number of triangles that constitute rows/columns
	double si,ti, sf, tf;
};


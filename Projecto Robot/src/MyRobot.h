#ifndef MyRobot_H
#define MyRobot_H

class MyRobot{
	float angle;
	float x;
	float z;
	float increment;
public:
	MyRobot();
	void draw();
	float getAngle();
	void setAngle(float angle);
	float getX();
	void setX(float x);
	float getZ();
	void setZ(float z);
	void rotate(int direction);//if direction==0 rotate to the right, if 1 rotate to the left
	void moveForward();
	void moveBack();
	int returnQuadrant();
	void toPositiveAngle();
};

#endif
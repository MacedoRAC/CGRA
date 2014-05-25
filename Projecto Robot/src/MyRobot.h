#ifndef MyRobot_H
#define MyRobot_H

#include<vector>

using namespace std;

struct Vertex{
	float x;
	float y;
	float z;
};

struct Texture{
	float s;
	float t;
};


class MyRobot{
	float angle;
	float x;
	float z;
	float increment;
	int stacks;
	vector<Vertex> vertexBase;
	vector<Vertex> vertexTop;
	vector<Texture> textureBase;
	vector<Texture> textureTop;
	vector<Texture> coordTexture;
	
public:
	MyRobot();
	void draw();
	void rotate(int direction);//if direction==0 rotate to the right, if 1 rotate to the left
	void moveForward();
	void moveBack();
	void calcVertexBase();
	void calcVertexTop();
	void calcTextCoord();
	int modes;
};

#endif
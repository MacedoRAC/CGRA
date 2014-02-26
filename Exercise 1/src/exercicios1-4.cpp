// ---- BEGIN Geometric transformation section

	// NOTE: OpenGL transformation matrices are transposed

	// Translate (5, 0, 2)
	
	/*float tra[16] = { 1.0, 0.0, 0.0, 0.0,
                      0.0, 1.0, 0.0, 0.0,
                      0.0, 0.0, 1.0, 0.0,
                      5.0, 0.0, 2.0, 1.0};

	// Rotate 30 degrees around Y
	// These constants would normally be pre-computed at initialization time
	// they are placed here just to simplify the exampl
	
	float a_rad=30.0*deg2rad;
	float cos_a = cos(a_rad);
	float sin_a = sin(a_rad);

	float rot[16] = { cos_a,  0.0,  -sin_a,  0.0,
                      0.0,    1.0,   0.0,    0.0,
                      sin_a,  0.0,   cos_a,  0.0,
                      0.0,    0.0,   0.0,    1.0};

	// Scaling by (2,2,1)
	float sca[16] = { 2.0, 0.0, 0.0, 0.0,
                      0.0, 2.0, 0.0, 0.0,
                      0.0, 0.0, 1.0, 0.0,
                      0.0, 0.0, 0.0, 1.0};

	// Multiplication of the previous transformations
	//glMultMatrixf(rot);     // GT = GT * rot
	 //glMultMatrixf(sca);     // GT = GT * sca
	 //glMultMatrixf(tra);     // GT = GT * tra
	//glPushMatrix();
	//glTranslatef(0,5,0);
	//myObject.draw();
	//glPopMatrix();
	//glRotatef(-30,0,3,0);
	//glScalef(2,2,1);
	//glTranslatef(5,0,2);
	

	// ---- END Geometric transformation section
	

	// ---- BEGIN Primitive drawing section

    // NOTE: the visible face of the polygon is determined by the order of the vertices

	myObject.draw();*/
#include <iostream>
#include <GL/glut.h>
#include <cmath>

void display(){
//	glClearColor(124,119,55,1.00);
	glClear(GL_COLOR_BUFFER_BIT);
			
	//double mirror = -1.0006;
	double mirror = -1.0095;
	glLineWidth(3.5f);
	
	// right face outer 
	glBegin(GL_LINE_STRIP); 
		glColor3ub(0,100,0); // color green
		const double rightFaceOuter[][2] = {
			{0, 0.093},
    		{0.0206, 0.1444},
    		{0.048, 0.1774},
    		{0.12, 0.222},
    		{0.1903, 0.2927},
    		{0.2586, 0.3963},
    		{0.3068, 0.5146},
    		{0.333, 0.6305},
    		{0.343, 0.77},
    		{0.339, 0.882},
    		{0.334, 0.933},
    		{0.388, 0.847},
    		{0.425, 0.764},
    		{0.457, 0.677},
    		{0.48, 0.568},
    		{0.4874, 0.4695},
    		{0.485, 0.3695},
    		{0.4754, 0.294},
    		{0.459, 0.216},
    		{0.431, 0.1335},
    		{0.4005, 0.059},
    		{0.361, -0.0184},
    		{0.434, -0.046},
    		{0.5294, -0.1017},
    		{0.6068, -0.17},
    		{0.6523, -0.2224},
    		{0.592, -0.25},
    		{0.5285, -0.259},
    		{0.455, -0.248},
    		{0.389, -0.214},
    		{0.3974, -0.289},
    		{0.3875, -0.3603},
    		{0.362, -0.42},
    		{0.3177, -0.4765},
    		{0.26, -0.524},
    		{0.226, -0.56},
    		{0.21, -0.59},
    		{0.211, -0.617},
    		{0.215, -0.641},
    		{0.2153, -0.68},
    		{0.2044, -0.743},
    		{0.182, -0.813},
    		{0.1512, -0.8565},
    		{0.127, -0.878},
    		{0.0978, -0.8893},
    		{0.0761, -0.896},
    		{0.0577, -0.908},
    		{0.0362, -0.9237},
    		{0.0235, -0.9284},
    		{0.009, -0.929},
    		{0.0003, -0.9267}
		};
		// iterate through points
		for (int i = 0; i < sizeof(rightFaceOuter) / sizeof(rightFaceOuter[0]); i++) {
    		glVertex2dv(rightFaceOuter[i]);
		}
	glEnd();
	
	// left face outer 
	glBegin(GL_LINE_STRIP);
		for (int i = (sizeof(rightFaceOuter) / sizeof(rightFaceOuter[0])) - 1; i >= 0; i--) {
    		glVertex2d(rightFaceOuter[i][0] * mirror, rightFaceOuter[i][1]);
		}
	glEnd();
	
	// right face inner
	glBegin(GL_LINE_STRIP);
		glColor3ub(255,255,0); // color yellow
		const double rightFaceInner[][2] = {
			{-0.0016, -0.042},
			{0.008, -0.039},
			{0.027, 0.003},
			{0.0325, 0.031},
			{0.0354, 0.056},
			{0.0546, 0.0933},
			{0.0875, 0.1266},
			{0.1286, 0.154},
			{0.1758, 0.1994},
			{0.216, 0.245},
			{0.2548, 0.2947},
			{0.303, 0.3698},
			{0.345, 0.459},
			{0.372, 0.5566},
			{0.382, 0.639},
			{0.3786, 0.759},
			{0.397, 0.683},
			{0.408, 0.624},
			{0.417, 0.563},
			{0.421, 0.488},
			{0.42, 0.39},
			{0.409, 0.302},
			{0.383, 0.193},
			{0.343, 0.09},
			{0.31, 0.022},
			{0.254, -0.056},
			{0.193, -0.123},
			{0.1425, -0.19},
			{0.11, -0.2615},
			{0.0995, -0.295},
			{0.098, -0.3275},
			{0.104, -0.356},
			{0.119, -0.373},
			{0.143, -0.382},
			{0.183, -0.3815},
			{0.2245, -0.369},
			{0.24, -0.367},
			{0.2399, -0.378},
			{0.222, -0.4006},
			{0.1933, -0.426},
			{0.14, -0.4735},
			{0.1077, -0.511},
			{0.08, -0.557},
			{0.0663, -0.5888},
			{0.0582, -0.6136},
			{0.0574, -0.631},
			{0.089, -0.577},
			{0.155, -0.505},
			{0.255, -0.4173},
			{0.291, -0.3735},
			{0.3103, -0.3377},
			{0.3147, -0.312},
			{0.3116, -0.2807},
			{0.2994, -0.2305},
			{0.299, -0.16},
			{0.303, -0.1336},
			{0.3094, -0.116},
			{0.3415, -0.1985},
			{0.36, -0.262},
			{0.359, -0.3234},
			{0.343, -0.368},
			{0.322, -0.395},
			{0.269, -0.4364},
			{0.233, -0.466},
			{0.194, -0.5065},
			{0.177, -0.5346},
			{0.1695, -0.561},
			{0.171, -0.596},
			{0.179, -0.638},
			{0.181, -0.688},
			{0.177, -0.7375},
			{0.163, -0.772},
			{0.1495, -0.788},
			{0.127, -0.8044},
			{0.1048, -0.8245},
			{0.0793, -0.8485},
			{0.0534, -0.8662},
			{0.0264, -0.8768},
			{0, -0.8782}
		};
		for (int i = 0; i < sizeof(rightFaceInner) / sizeof(rightFaceInner[0]); i++) {
    		glVertex2dv(rightFaceInner[i]);
		}
	glEnd();
	// left face inner 
	glBegin(GL_LINE_STRIP);
		for (int i = (sizeof(rightFaceInner) / sizeof(rightFaceInner[0])) - 1; i >= 0; i--) {
    		glVertex2d(rightFaceInner[i][0] * mirror, rightFaceInner[i][1]);
		}
	glEnd();
	
	// right ear yellow
	glBegin(GL_LINE_STRIP);
		glColor3ub(255,255,0); // color yellow
		const double rightEarPts[][2] = {
			{0.361, -0.0185},
			{0.3871, -0.034},
			{0.445, -0.077},
			{0.492, -0.1224},
			{0.525,-0.158},
			{0.5465, -0.194},
			{0.522, -0.2013},
			{0.4605, -0.199},
			{0.4095, -0.182},
			{0.378, -0.161},
			{0.3608, -0.1127},
			{0.344, -0.0774},
			{0.3448,-0.0494},
			{0.361, -0.0185}
		};
		for (int i = 0; i < sizeof(rightEarPts) / sizeof(rightEarPts[0]); i++) {
    		glVertex2dv(rightEarPts[i]);
		}
	glEnd();
	// left ear 
	glBegin(GL_LINE_STRIP);
		for (int i = (sizeof(rightEarPts) / sizeof(rightEarPts[0])) - 1; i >= 0; i--) {
    		glVertex2d(rightEarPts[i][0] * mirror, rightEarPts[i][1]);
		}
	glEnd();

	// right eye
	glBegin(GL_LINE_STRIP);
		const double rightEyePts[][2] = {
    		{0.134, -0.3214},
    		{0.156, -0.283},
    		{0.197, -0.242},
    		{0.232, -0.218},
    		{0.2489, -0.212},
    		{0.25, -0.246},
    		{0.2399, -0.2774},
    		{0.2193, -0.2986},
    		{0.19, -0.313},
    		{0.1677, -0.3218},
    		{0.1344, -0.3213}
		};
		for (int i = 0; i < sizeof(rightEyePts) / sizeof(rightEyePts[0]); i++) {
			glColor3ub(0,100,0); // color green
    		glVertex2dv(rightEyePts[i]);
		}
	glEnd();
	// left eye 
	glBegin(GL_LINE_STRIP);
		for (int i = (sizeof(rightEyePts) / sizeof(rightEyePts[0])) - 1; i >= 0; i--) {
			glColor3ub(0,100,0); // color green
    		glVertex2d(rightEyePts[i][0] * mirror, rightEyePts[i][1]);
		}
	glEnd();
	
	// right nose
	glBegin(GL_LINE_STRIP);
		glColor3ub(0,100,0); // color green
		const double rightNose[][2] = {
    		{0, -0.6537},
    		{0.0542, -0.6537},
    		{0.05, -0.6834},
    		{0.0561, -0.7054},
    		{0.0564, -0.717},
    		{0.0438, -0.729},
    		{0.0254, -0.7418},
    		{0.0118, -0.7479},
    		{0, -0.7502}
		};
		for (int i = 0; i < sizeof(rightNose) / sizeof(rightNose[0]); i++) {
    		glVertex2dv(rightNose[i]);
		}
	glEnd();
	// left nose
	glBegin(GL_LINE_STRIP);
		for (int i = (sizeof(rightNose) / sizeof(rightNose[0])) - 1; i >= 0; i--) {
    		glVertex2d(rightNose[i][0] * mirror, rightNose[i][1]);
		}
	glEnd();

	// right mouth
	glBegin(GL_LINE_STRIP);
		glColor3ub(0,100,0); // color green
		const double rightMouth[][2] = {
    		{0.1255, -0.7342},
			{0.1254, -0.7495},
			{0.1186, -0.7592},
			{0.109, -0.7671},
			{0.0935, -0.7727},
			{0.0817, -0.7747},
			{0.0703, -0.7727},
			{0.0839, -0.7553},
			{0.099, -0.744},
			{0.114, -0.7367},
			{0.1255, -0.7342}
		};
		for (int i = 0; i < sizeof(rightMouth) / sizeof(rightMouth[0]); i++) {
    		glVertex2dv(rightMouth[i]);
		}
	glEnd();
	// left mouth
	glBegin(GL_LINE_STRIP);
		for (int i = (sizeof(rightMouth) / sizeof(rightMouth[0])) - 1; i >= 0; i--) {
    		glVertex2d(rightMouth[i][0] * mirror, rightMouth[i][1]);
		}
	glEnd();
	glFlush();
	
}

int main(int argc, char** argv) {
	
	glutInit(&argc,argv);
	glutInitWindowSize(500,500);
	glutCreateWindow("Character : FEU - Tamaraw");
	glutDisplayFunc(display);
	glutMainLoop();
	
	return 0;
}

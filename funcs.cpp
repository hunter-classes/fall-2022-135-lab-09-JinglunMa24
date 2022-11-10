#include <iostream>
#include "funcs.h"
#include "coord3d.h"
#include <cmath>

// add functions here

// Task A
double length(Coord3D *p) {
	return sqrt( pow((*p).x,2) + pow((*p).y,2) + pow((*p).z,2) );
}


// Task B
Coord3D *fartherFromOrigin(Coord3D *p1, Coord3D *p2) {
	if (length(p1) > length(p2)) {
		return p1;
	}
	else {
		return p2;
	}
}


// Task C
void move(Coord3D *ppos, Coord3D *pvel, double dt) {
	(*ppos).x = (*ppos).x + (*pvel).x * dt;
    (*ppos).y = (*ppos).y + (*pvel).y * dt;
    (*ppos).z = (*ppos).z + (*pvel).z * dt;
}


// Task E
Coord3D* createCoord3D(double x, double y, double z) {
	Coord3D *newOne = new Coord3D;
	(*newOne).x = x;
	(*newOne).y = y;
	(*newOne).z = z;
	return newOne;
}


void deleteCoord3D(Coord3D *p) {
	delete p;
}
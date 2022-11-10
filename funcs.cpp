#include <iostream>
#include <cmath>
#include "funcs.h"

// add functions here
double length(Coord3D *p){
    double x = p -> x;
    double y = p -> y;
    double z = p -> z;
    return sqrt(x*x + y*y + z*z);
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    double first = length(p1);
    double second = length(p2);
    if(first > second)
        return p1;
    else
        return p2;
}

void move(Coord3D *ppos, Coord3D *pvel, double dt){
    ppos -> x += pvel -> x * dt;
    ppos -> y += pvel -> y * dt;
    ppos -> z += pvel -> z * dt;
}

Coord3D* createCoord3D(double x, double y, double z){
    Coord3D* temp = new Coord3D{x, y, z};
    return temp;
}

void deleteCoord3D(Coord3D *p){
    delete p;
}

bool compare(Coord3D *p, Coord3D *q){
    if(p -> x - q -> x < 0.0001 && p -> y - q -> y < 0.0001 && p -> z - q-> z < 0.001)
        return true;
    else
        return false;
}
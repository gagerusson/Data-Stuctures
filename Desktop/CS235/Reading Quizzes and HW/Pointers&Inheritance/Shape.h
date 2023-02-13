#ifndef POINTERS_INHERITANCE_SHAPE
#define POINTERS_INHERITANCE_SHAPE
#include <string>
#include <iostream>
#include <math.h>

using namespace std;

class Shape {

public:
    Shape () {};
    virtual string toString() = 0;
    virtual void printParameters() = 0;
    virtual void printArea() = 0;
    virtual double getArea() = 0;
};

#endif
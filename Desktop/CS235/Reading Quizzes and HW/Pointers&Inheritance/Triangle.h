#ifndef POINTERS_INHERITANCE_TRIANGLE_H
#define POINTERS_INHERITANCE_TRIANGLE_H
#include "Shape.h"

class Triangle {
private:
    double base;
    double height;
    string name = "Triangle";
public:
    Triangle(double base, double height) {this->base = base, this->height = height;};
    string toString();
    void printParameters();
    void printArea();
    double getArea();
};


#endif //POINTERS_INHERITANCE_TRIANGLE_H

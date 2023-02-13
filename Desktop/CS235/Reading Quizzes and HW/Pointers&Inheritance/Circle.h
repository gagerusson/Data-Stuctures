#ifndef POINTERS_INHERITANCE_CIRCLE_H
#define POINTERS_INHERITANCE_CIRCLE_H
#include "Shape.h"
#include <string>

class Circle: public Shape {
private:
    double radius;
    string name = "Circle";
public:
    Circle (double radius) {this->radius = radius;};
    string toString();
    void printParameters();
    void printArea();
    double getArea();
};

#endif //POINTERS_INHERITANCE_CIRCLE_H

#ifndef POINTERS_INHERITANCE_RECTANGLE_H
#define POINTERS_INHERITANCE_RECTANGLE_H
#include "Shape.h"

class Rectangle: public Shape {
private:
    double length;
    double width;
    string name = "Rectangle";
public:
    Rectangle (double length, double width) {this->length = length, this->width = width;};
    string toString();
    void printParameters();
    void printArea();
    double getArea();
};

#endif //POINTERS_INHERITANCE_RECTANGLE_H

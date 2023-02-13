#include "Circle.h"

double const PI = M_PI;


string Circle:: toString() {
    return this->name;
}

void Circle:: printParameters() {
    cout << this-> radius << endl;
}

void Circle::printArea() {
    cout << PI * pow(this->radius, 2) << endl;
}

double Circle::getArea() {
    return PI * pow(this->radius, 2);
}
#include "Triangle.h"

string Triangle::toString() {
    return this->name;
}

void Triangle::printParameters() {
    cout << this->base << ", " << this->height << endl;
}

void Triangle::printArea() {
    cout << 0.5 * (this->base * this->height) << endl;
}

double Triangle::getArea() {
    return 0.5 * double(this->base * this->height);
}
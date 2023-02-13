#include "Rectangle.h"

string Rectangle::toString() {
    return this->name;
}

void Rectangle::printParameters() {
    cout << this->length << ", " << this->width << endl;
}

void Rectangle::printArea() {
    cout << this->length * this->width << endl;
}

double Rectangle::getArea() {
    return this->length * this->width;
}
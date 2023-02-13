#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <vector>

using namespace std;

int main() {
    double len = 12.0;
    //Shape shape;
    //cout << shape.toString() << endl;
    //shape.printParameters();
    //shape.printArea();

    cout << endl;

    Circle circle(4);
    cout << circle.toString() << endl;
    circle.printParameters();
    circle.printArea();

    cout << endl;

    Rectangle rect(4, 6);
    cout << rect.toString() << endl;
    rect.printParameters();
    rect.printArea();

    cout << endl;

    //Shape * shapePtr = &shape;
    Circle * circlePtr = &circle;
    circlePtr = new Circle(10);
    cout << circlePtr->toString() << endl;
    circlePtr->printParameters();
    circlePtr->printArea();

    cout << endl;

    Shape * shapePtr2 = new Circle(4);
    cout << shapePtr2->toString() << endl;
    shapePtr2->printArea();

    cout << endl;

    vector<Shape*> shapeVec;
    shapeVec.push_back(new Circle(6));
    shapeVec.push_back(new Circle(9));
    shapeVec.push_back(new Rectangle(4, 7));
    shapeVec.push_back(new Rectangle(8, 3));
    //shapeVec.push_back(new Triangle(4, 8));
    //shapeVec.push_back(new Triangle(3, 10));
    for (int i = 0; i < shapeVec.size(); i++) {
        cout << shapeVec[i]->toString() << " " << shapeVec[i]->getArea() << endl;
    }

    cout << endl;

    Triangle tri(4, 6);

}

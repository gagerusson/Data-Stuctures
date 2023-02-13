#ifndef TEMPLATES_POINT_H
#define TEMPLATES_POINT_H
#include <iostream>
#include <math.h>

using namespace std;

template <class T>
class Point{
public:
    Point (T x, T y): m_x(x),m_y(y){ cout << "Constructor" << endl;}
    T getX() const { return m_x; }
    T getY() const { return m_y; }
    void setX() {m_x = this->x;}
    void setY() {m_y = this->y;}
    T distanceFromOrigin() {return sqrt(pow(m_x, 2) + pow(m_y, 2));}
private:
    T m_x = 0;
    T m_y = 0;
};


#endif //TEMPLATES_POINT_H

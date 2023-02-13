#include <iostream>
#include "Point.h"

using namespace std;

//int sum(int array[], const int size) {
//    int total = 0;
//    for (int i = 0; i < size; i++) {
//        total += array[i];
//    }
//    return total;
//}
//
//double sum(double array[], const int size) {
//    double total = 0.0;
//    for (int i = 0; i < size; i++) {
//        total += array[i];
//    }
//    return total;
//}
template <class T>
int sum(T array[], const int size) {
    T total = 0;
    for (int i = 0; i < size; i++) {
        total += array[i];
    }
    return total;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    cout << sum(arr, 5) << endl;
    double arr2[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    cout << sum(arr2, 5) << endl;
    long arr3[] = {1, 2, 3, 4, 5};
    cout << sum(arr3, 5) << endl;
    Point p(3, 4);
    cout << "[" <<  p.getX() << ", " << p.getY() << "]" << endl;
    cout << p.distanceFromOrigin() << endl;
    Point p2(6.3, 19.24);
    cout << "[" << p2.getX() << ", " << p2.getY() << "]" << endl;
    cout << p2.distanceFromOrigin() << endl;
}


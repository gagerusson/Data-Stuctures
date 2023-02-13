#include <iostream>
#include "arrayFunctions.h"

using namespace std;

void arrayFunctions:: printArray(const int array[], unsigned int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (count == 10) {
            cout << endl;
            count = 0;
        }
        cout << array[i] << "      ";
        count++;
    }
}

bool arrayFunctions:: push_back(int array[], unsigned int maxSize, int value, unsigned int& nFilled) {
    if (nFilled < maxSize) {
        array[nFilled] = value;
        nFilled++;
        return true;
    }
    return false;
}

int arrayFunctions:: find(const int array[], unsigned int size, int value) {
    for (int i = 0; i < size; i++) {
        if (array[i] == value) {
            return i;
        }
    }
    return size;
}

bool arrayFunctions:: remove(int array[], unsigned int &size, unsigned int pos) {
    if (pos >= size) {
        return false;
    }
    for (int i = pos; i < size; i++) {
        array[i] = array[i+1];
    }
    size--;
    return true;
}

bool arrayFunctions:: insert(int* &array, unsigned int &maxSize, unsigned int & nFilled, unsigned int const &pos, int const &value) {
    if (pos > nFilled) {
        return false;
    }
    if (nFilled >= maxSize) {
        grow(array,maxSize)
    }
    for (int i = nFilled; i > pos; i--) {
        array[i + 1] = array[i];
    }
    array[pos] = value;
    nFilled += 1;
    return true;

}

void arrayFunctions:: grow(int* &array, unsigned int &capacity) {
    int * newArray = new int[capacity * 2];
    for (int i = 0; i < capacity; i++) {
        newArray[i] = array[i];
    }
    delete [] array;
    array = newArray;
    capacity *= 2;
}


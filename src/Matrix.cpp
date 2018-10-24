#include "Matrix.h"
#include <cstdlib>

thread_local int Matrix::angle = 0;

Matrix::Matrix(int _size) : size{_size} {
}

void Matrix::init(void) {
    data = new int[size*size];
    for (int iter=size*size;iter;iter--) {
        data[iter-1] = rand() % 100;
    }
}

void Matrix::setElement(int firstDim, int secondDim, int value) {
    data[calcPos(firstDim, secondDim)] = value;
}

void Matrix::rot(void) {
    angle = (angle + 1) % 4;
}

int Matrix::getElement(int firstDim, int secondDim) {
    return data[calcPos(firstDim, secondDim)];
}

int Matrix::calcPos(int firstDim, int secondDim) {
    int position;
    switch(angle)
    {
        case 0:
            position = firstDim + size * secondDim;
            break;
        case 1:
            position = secondDim + size * (size - firstDim - 1);
            break;
        case 2:
            position = size - firstDim - 1 + size * (size - secondDim - 1);
            break;
        case 3:
            position = (size - secondDim - 1) + size * firstDim;
            break;
    }

    return position;
}


#include "Matrix.h"
#include <iostream>
Matrix::Matrix(int _size) : size{_size}, angle{0} {
}
void Matrix::init(void){
    data = new int[size*size];
}
void Matrix::setElement(int firstDim, int secondDim, int value){
    switch(angle)
    {
        case 0:
            data[firstDim+size*secondDim] = value;
            break;
        case 1:
            data[(size-secondDim-1)+size*firstDim] = value;
            break;
        case 2:
            data[size-firstDim-1+size*(size-secondDim-1)] = value;
            break;
        case 3:
            data[secondDim+size*(size-firstDim-1)] = value;
            break;
    }
}
void Matrix::rot(void){
    angle=(angle+1)%4;
}
int Matrix::getElement(int firstDim, int secondDim){
    int result;
    switch(angle)
    {
        case 0:
            result = data[firstDim+size*secondDim];
            break;
        case 1:
            result = data[(size-secondDim-1)+size*firstDim];
            break;
        case 2:
            result = data[size-firstDim-1+size*(size-secondDim-1)];
            break;
        case 3:
            result = data[secondDim+size*(size-firstDim-1)];
            break;
    }
    return result;
}


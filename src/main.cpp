#include <iostream>
#include "Matrix.h"
int main(int argc, char **argv){
    Matrix *m = new Matrix(4);
    m->init();
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            std::cout << m->getElement(j, i) << ' ';
        }
    }
    std::cout << std::endl;
    m->rot();
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            std::cout << m->getElement(j, i) << ' ';
        }
    }
    std::cout << std::endl;
    m->rot();
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            std::cout << m->getElement(j, i) << ' ';
        }
    }
    std::cout << std::endl;
    m->rot();
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            std::cout << m->getElement(j, i) << ' ';
        }
    }
    std::cout << std::endl;
    return 0;
}

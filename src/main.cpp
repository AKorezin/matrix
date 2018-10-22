#include <iostream>
#include "Matrix.h"
int main(int argc, char **argv){
    Matrix *m = new Matrix(3);
    m->init();
    m->setElement(0,0,1);
    std::cout << m->getElement(0,0) << std::endl;
    m->rot();
    std::cout << m->getElement(3,0) << std::endl;
    m->rot();
    std::cout << m->getElement(3,3) << std::endl;
    m->rot();
    std::cout << m->getElement(0,3) << std::endl;
    return 0;
}

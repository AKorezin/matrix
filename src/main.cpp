#include <iostream>
#include "Matrix.h"
int main(int argc, char **argv){
    Matrix *m = new Matrix(4);
    m->init();
    m->setElement(0,0,1);
    std::cout << m->getElement(0,0) << std::endl;
    m->rot();
    std::cout << m->getElement(4,0) << std::endl;
    m->rot();
    std::cout << m->getElement(4,4) << std::endl;
    m->rot();
    std::cout << m->getElement(0,4) << std::endl;
    return 0;
}

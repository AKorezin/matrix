#include <iostream>
#include "Matrix.h"
#include <thread>
#include <mutex>

std::mutex lock;

void callback(Matrix *m){
    int rot = rand() % 4;
    for (int i=0; i<rot; i++)
    {
        m->rot();
    }
    lock.lock();
    std::cout << rot << ' ' << m->getElement(0,0) << std::endl;
    lock.unlock();
}

int main(int argc, char **argv){
    Matrix *m = new Matrix(4);
    m->init();


    /*for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            std::cout << m->getElement(j, i) << ' ';
        }
    }
    std::cout << std::endl;
    m->rot();
    for (int i=0,k=0;i<4;i++){
        for (int j=0;j<4;j++){
            m->setElement(j, i, k);
            k++;
        }
    }
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
    std::cout << std::endl;*/

    std::thread threads[100];
    for (int i=0; i<100; i++){
        threads[i]=std::thread(callback, m);
    }
    for (int i=0; i<100; i++){
        threads[i].join();
    }

    return 0;
}

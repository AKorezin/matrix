#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
    public:
        Matrix(int _size = 0);
        void init(void);
        void setElement(int firstDim, int secondDim, int value);
        int getElement(int firstDim, int secondDim);
        void setSize(int size);
        int getSize(void);
        void rot(void);
        void threadStart(void);
    private:
        int calcPos(int, int);
        int *data;
        int size;
        static thread_local int angle;
};
#endif

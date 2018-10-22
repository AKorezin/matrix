#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
    public:
        Matrix(int size = 0);
        void init(void);
        void setElement(int firstDim, int secondDim, int value);
        int getElement(int firstDim, int secondDim);

        void setSize(int size);
        int getSize(void);
        void rot(void);
    private:
        int *data;
        int size;
        int angle;
};
#endif

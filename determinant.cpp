#include "determinant.hpp"
#include <iostream>

/*
Give 2 inputs of a pointer to a square 2d array and the size of the matrix,
calculate determinant of the array. Returns the int determinant.
*/
int determinant(int **arrayPtrIn, int matrixSizeIn)
{
    int computedDeterminant;
    if (matrixSizeIn == 2)// program only calculates arrays 2x2 or 3x3
    {
        computedDeterminant = (arrayPtrIn[0][0] * arrayPtrIn[1][1]) - (arrayPtrIn[0][1] * arrayPtrIn[1][0]);
    }
    if (matrixSizeIn == 3)
    {
        int calc1 = arrayPtrIn[0][0] * ((arrayPtrIn[1][1] * arrayPtrIn[2][2]) - (arrayPtrIn[1][2]*arrayPtrIn[2][1]));
        int calc2 = arrayPtrIn[0][1] * ((arrayPtrIn[1][0] * arrayPtrIn[2][2]) - (arrayPtrIn[1][2]*arrayPtrIn[2][0]));
        int calc3 = arrayPtrIn[0][2] * ((arrayPtrIn[1][0] * arrayPtrIn[2][1]) - (arrayPtrIn[1][1]*arrayPtrIn[2][0]));
        computedDeterminant = calc1 - calc2 + calc3;
    }
    return computedDeterminant;
}
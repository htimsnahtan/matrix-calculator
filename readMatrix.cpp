#include "readMatrix.hpp"
#include <iostream>

/*
Give 2 inputs of a pointer to a square 2d array and the size of the matrix,
prompts user to input integers into each point on the matrix. Does not return.
*/
void readMatrix(int **arrayPtrIn, int matrixSizeIn)
{
    std::cout << "Enter " << matrixSizeIn*matrixSizeIn << 
                    " numbers separated by the Enter key (counting left to right from top, left point in matrix"
                    << std::endl;
    for (int i = 0; i < matrixSizeIn; ++i)
        for (int j = 0; j < matrixSizeIn; ++j)
        {
            std::cin >> arrayPtrIn[i][j];
        }
}
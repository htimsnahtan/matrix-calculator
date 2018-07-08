/*********************************************************************
** Program name: Matrix Calculator
** Author: Nathan Smith
** Date: July 1, 2018
** Description: Includes both readMatrix and determinant header files. 
* Prompts user to choose size of matrix (2x2 or 3x3) then dynamically
* allocates memory space for matrix using readMatrix to prompt th euser to eneter
* 4 or 9 integers to fill the matrix. Then, the determinant is calculated using the
* determinant included function and both the matrix and determinant are displayed
* to the user. Finally, the dynamically allocated memory is freed.
*********************************************************************/

#include <iostream>
#include "readMatrix.hpp"
#include "determinant.hpp"

int main()
{
    //collect matrix size from user
    int matrixSize;
    std::cout << "Enter 2 to create a 2x2 matrix and 3 for a 3x3 matrix:" << std::endl;
    std::cin >> matrixSize;
  
    // dynamically allocates memory for array
    int** matrix = new int*[matrixSize];
    for(int i = 0; i < matrixSize; ++i)
    {
        matrix[i] = new int[matrixSize];
    }
    
    //prompts user to fill matrix
    
    readMatrix(matrix, matrixSize);
    
    //prints matrix
    std::cout << "Here is a graphical display of the matrix:";

    for (int i = 0; i < matrixSize; ++i)
    {
        std::cout << "\n";
        for (int j = 0; j < matrixSize; ++j)
            {
            std::cout << matrix[i][j] << " ";
            }
    }
    std::cout << std::endl;
    
    //prints determinant to user
    std::cout << "The determinant is: " << determinant(matrix, matrixSize) << std::endl;

    //free memory
    for (int i = 0; i < matrixSize; ++i)
        delete [] matrix[i];
    delete [] matrix;
    
    return 0;
}
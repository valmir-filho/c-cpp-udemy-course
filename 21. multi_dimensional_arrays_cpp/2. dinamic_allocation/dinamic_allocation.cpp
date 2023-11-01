#include <iostream>

int main() {

    int rows, cols;
    int **matrix;

    // Ask for the number of rows and columns of the matrix
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    // Allocate memory for the rows of the matrix (an array of pointers)
    matrix = new int*[rows];

    for (int i = 0; i < rows; i++) {
        // Allocate memory for each row (an array of integers)
        matrix[i] = new int[cols];
    }

    // Initialize the matrix with some values
    int value = 1;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = value;
            value++;
        }
    }

    // Print the matrix
    std::cout << "Matrix\n";
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Free the allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

/*
In this C++ example, you can specify the number of rows and columns of the matrix, dynamically allocate memory for the rows and columns, initialize the matrix with
values, and then print the matrix. Be sure to free the dynamically allocated memory at the end to avoid memory leaks.

Remember that using pointers and dynamic memory allocation requires care to avoid memory leaks, and it's important to release the allocated memory when it's no
longer needed.
*/

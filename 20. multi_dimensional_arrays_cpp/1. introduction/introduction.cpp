#include <iostream>

int main() {

    // Declaring and initializing a multi-dimensional array of integers
    int my_matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Accessing and displaying the elements of the matrix
    std::cout << "Matrix" << std::endl;
    
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            std::cout << my_matrix[row][col] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

/*
In this example, we create a multi-dimensional array of integers called "my_matrix" with 3 rows and 3 columns and initialize the elements with values from 1 to 9.
We use two nested for loops to access and display the elements of the matrix.
*/

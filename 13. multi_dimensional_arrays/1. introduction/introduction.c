/*
In C, a multi-dimensional array is a data structure that stores elements in a rectangular grid. In other words, it is a collection of elements arranged in rows and
columns. They are often used to represent tabular data, such as spreadsheets or images.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
    Declaring a multi-dimensional array: to declare a multi-dimensional array, you specify the type of elements, the name of the multi-dimensional array, and the 
    dimensions (i.e., the number of rows and columns).
    */
    int multi_dimentional_array1[3][4];  // Declares a two-dimensional integer array with 3 rows and 4 columns.

    // Initializing a multi-dimensional array: you can initialize a multi-dimensional array at the time of declaration or later.

    // Direct Initialization
    int multi_dimentional_array2[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    // Later Initialization
    int multi_dimentional_array3[3][4];
    multi_dimentional_array3[0][0] = 1;
    multi_dimentional_array3[0][1] = 2;
    multi_dimentional_array3[0][2] = 3;
    multi_dimentional_array3[0][3] = 4;
    multi_dimentional_array3[1][0] = 5;
    multi_dimentional_array3[1][1] = 6;
    multi_dimentional_array3[1][2] = 7;
    multi_dimentional_array3[1][3] = 8;
    multi_dimentional_array3[2][0] = 9;
    multi_dimentional_array3[2][1] = 10;
    multi_dimentional_array3[2][2] = 11;
    multi_dimentional_array3[2][3] = 12;    

    // Accessing a specific element
    printf("%d\n", multi_dimentional_array3[1][2]);

    // Interating through a multi-dimensional array
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 4; column++) {
            printf("%d ", multi_dimentional_array3[row][column]);
        }
        
        printf("\n");
    }

    return 0;
}

/*
Observations:

- In C, the dimensions of a multi-dimensional array are defined at the time of declaration and are fixed. If you need a dynamically sized multi-dimensional array,
you might consider using dynamic memory allocation with functions like "malloc" and "free".
*/

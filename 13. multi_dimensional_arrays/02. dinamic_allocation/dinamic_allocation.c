#include <stdio.h>
#include <stdlib.h>

int main() {

    int rows, cols;
    int **matrix;

    // Ask for the number of rows and columns of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Allocate memory for the rows of the matrix (an array of pointers)
    matrix = (int **)malloc(rows * sizeof(int *));

    if (matrix == NULL) {
        printf("Memory allocation for rows failed. Exiting...\n");
        return 1;  // Exit with an error code
    }

    // Allocate memory for each row (an array of integers)
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Memory allocation for columns failed. Exiting...\n");
            return 1;  // Exit with an error code
        }
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
    printf("Matrix\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Free the allocated memory
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;  // Exit successfully
}

/*
In this example, you request the number of rows and columns of the matrix, allocate memory for the rows and columns, initialize the matrix with values, and print
the matrix. Make sure to free the dynamically allocated memory at the end to avoid memory leaks.
*/

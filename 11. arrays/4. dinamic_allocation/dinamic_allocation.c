#include <stdio.h>
#include <stdlib.h>

int main() {

    int size;
    int *dynamic_array;

    printf("Enter the initial size of the array: ");
    scanf("%d", &size);

    // Allocate memory for the dynamic array using malloc
    dynamic_array = (int *)malloc(size * sizeof(int));

    if (dynamic_array == NULL) {
        printf("Memory allocation (malloc) failed. Exiting...\n");
        return 1;  // Exit with an error code
    }

    // Initialize the elements of the dynamic array using calloc
    dynamic_array = (int *)calloc(size, sizeof(int));

    if (dynamic_array == NULL) {
        printf("Memory allocation (calloc) failed. Exiting...\n");
        return 1;  // Exit with an error code
    }

    // Update the size of the array using realloc
    printf("Enter the new size of the array: ");
    scanf("%d", &size);

    dynamic_array = (int *)realloc(dynamic_array, size * sizeof(int));

    if (dynamic_array == NULL) {
        printf("Memory reallocation (realloc) failed. Exiting...\n");
        return 1;  // Exit with an error code
    }

    // Initialize the elements of the dynamic array
    for (int i = 0; i < size; i++) {
        dynamic_array[i] = i * 2;
    }

    // Print the contents of the dynamic array
    printf("Dynamic Array Contents: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", dynamic_array[i]);
    }

    printf("\n");

    // Free the dynamically allocated memory
    free(dynamic_array);

    return 0;  // Exit successfully
}

/*
In this code, you can specify the initial size of the array and then use "malloc" for initial memory allocation. Then, you use "calloc" to initialize the elements
with zeros and later use "realloc" to resize the array with a new size. Make sure to check the pointers after each allocation to ensure successful allocation and
free the allocated memory at the end.
*/

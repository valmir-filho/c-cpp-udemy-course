// Fill an array with values provided by the user.

#include <stdio.h>
#include <stdlib.h>

int main() {

    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an arrar with the specified size
    int numbers[size];

    // Fill the array with values provided by the user
    for (int number = 0; number < size; number++) {
        printf("Enter the number for position %d: ", number);
        scanf("%d", &numbers[number]);
    }

    // Print the values in the array
    printf("Values in the array: ");
    for (int number = 0; number < size; number++) {
        printf("%d", numbers[number]);
    }

    printf("\n");

    return 0;
}

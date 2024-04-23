// Create an algorithm to calculate the average of an grade array.

#include <stdio.h>
#include <stdlib.h>

int main() {

    float grades[4], sum = 0.0, average;
    int size_array = sizeof(grades) / sizeof(grades[0]);

    for (int grade = 0; grade < size_array; grade++) {
        printf("Enter the grade %d: ", grade + 1);
        scanf("%f", &grades[grade]);
    }

    for (int i = 0; i < size_array; i++) {
        sum += grades[i];
    }

    average = sum / size_array;

    printf("The average grades of array is %.1f.\n", average);

    return 0;
}

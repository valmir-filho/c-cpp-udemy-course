// Calculate the absolute value of the difference between 2 school grades.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float grade1, grade2, difference, absolute_value;

    printf("Enter the first grade: ");
    scanf("%f", &grade1);

    printf("Enter the second grade: ");
    scanf("%f", &grade2);

    difference = grade1 - grade2;
    absolute_value = fabsf(difference);

    printf("The absolute value of the difference between %.0f and %.0f is %.2f\n", grade1, grade2, absolute_value);

    return 0;
}

// Observation: if the grades are integers, you can use the abs() function.

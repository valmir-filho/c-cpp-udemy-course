// Calculate the average between 2 numbers.

#include <stdio.h>
#include <stdlib.h>

int main() {

    float n1, n2, average;

    printf("Enter the first number: ");
    scanf("%f", &n1);

    printf("Enter the second number: ");
    scanf("%f", &n2);

    average = (n1 + n2) / 2;

    printf("The average between %.0f and %.0f is %.2f.\n", n1, n2, average);

    return 0;
}

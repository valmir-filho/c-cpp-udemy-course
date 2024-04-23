/*
Write a code that determines if three line segments form a triangle and them, which type of triangle it is based on its sides.

1) Rules to determines if three line segments form a triangle:

The sum of any two sides of a triangle must be greater than the length of the third side. In mathematical terms, if "a," "b," and "c" are the lengths of the
triangle's sides, then:

a + b > c
a + c > b
b + c > a

2) Rules to determine wich type of triangle:

Scalene triangle: A triangle that has all sides with different measures.
Isosceles triangle: A triangle that has two sides with the same measures.
Equilateral triangle: A triangle that has all sides with the same measures.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float side_a, side_b, side_c;

    printf("Enter the triangle's side A: ");
    scanf("%f", &side_a);

    printf("Enter the triangle's side B: ");
    scanf("%f", &side_b);

    printf("Enter the triangle's side C: ");
    scanf("%f", &side_c);

    if (((side_a + side_b) > side_c) && ((side_a + side_c) > side_b) && ((side_b + side_c) > side_a)) {
        if ((side_a == side_b) && (side_a == side_b) && (side_b == side_c)) {
            printf("The line segments %.2f, %.2f and %.2f form a equilateral triangle.\n", side_a, side_b, side_c);
        } else if ((side_a == side_b) || (side_a == side_c) || (side_b == side_c)) {
            printf("The line segments %.2f, %.2f and %.2f form an isosceles triangle.\n", side_a, side_b, side_c);
        } else {
            printf("The line segments %.2f, %.2f and %.2f form a scalene triangle.\n", side_a, side_b, side_c);
        }
    } else {
        printf("The line segments %.2f, %.2f and %.2f don't form a triangle.\n", side_a, side_b, side_c);
    }

    return 0;
}

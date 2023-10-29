/*
In C, an array is a data structure that stores a collection of elements of the same data type. Array elements are stored in contiguous memory locations and can be
accessed using indices.

Here are the basics of using arrays in C:

1) Declaring an Array: to declare an array in C, you specify the data type of the elements and the name of the array, followed by the size in square brackets
(i.e., the number of elements the array can hold).

For example: int numbers[5]; (declares an array of integers with 5 elements).

2) Initializing an Array: you can initialize an array at the time of declaration or later by assigning values to individual elements or using an initialization list.

Examples:

- initialization at the time of declaration: int numbers[5] = {1, 2, 3, 4, 5};
   
- initialization later:

    int numbers[5];
    numbers[0] = 1;
    numbers[1] = 2;
    ...

3) Accessing Array Elements: array elements are accessed using indices, starting from 0 for the first element and going up to the size of the array minus one.

For example: int thirdNumber = numbers[2]; (accesses the third element of the array).

4) Array Size: you can determine the size of an array using the "sizeof" operator or by counting the elements in the array if the size is known.

For example: int size = sizeof(numbers) / sizeof(numbers[0]);

5) Iterating Through an Array: you can loop through an array using loops, such as "for".

Here's an example of how to iterate through and print the elements of an array:

    for (int i = 0; i < size; i++) {
        printf("%d\n", numbers[i]);
    }

6) Limitations: in C, arrays have a fixed size when declared. If you need a dynamic size, you may need to use dynamic memory allocation functions like "malloc"
and "free".

7) Bounds Checking: make sure not to access elements outside the bounds of the array, as it can result in undefined behavior and program crashes. Use
boundary-checking conditions to ensure that your indices are within the array's bounds.

These are the basic concepts of arrays in C. They are a fundamental and widely used data structure in programming for storing and manipulating collections of
elements of the same data type.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int numbers[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Reading the specific position of array
    printf("Position 1: %d.\n", numbers[1]);

    // Reading all the elements of array
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}

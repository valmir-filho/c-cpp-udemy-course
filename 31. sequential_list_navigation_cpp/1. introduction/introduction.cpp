/*
Sequential navigation in a sequential list in C++ involves traversing the elements of a list (or array) sequentially, i.e., from one element to the next, typically
using loops such as a "for" loop.
*/

// Example: suppose you have an array of integers and you want to iterate through all the elements in the list and print their values.

#include <iostream>

int main() {

    int list[] = {1, 2, 3, 4, 5};  // Example of a sequential list (array) of integers

    // Calculate the size of the list
    int size = sizeof(list) / sizeof(list[0]);

    // Navigate the sequential list using a for loop
    for (int i = 0; i < size; i++) {
        std::cout << "Element " << i << ": " << list[i] << std::endl;
    }

    return 0;
}

/*
In this example, we have an array named "list" with 5 integer elements. First, we calculate the size of the list by dividing the total size of the array by the
size of a single element. Then, we use a "for" loop to iterate through the sequential list. The loop starts at "i = 0", the first element of the array, and
continues until "i < size", printing the value of the element in each iteration.

When you run this code, you will see the output that displays each element of the sequential list:

Element 0: 1
Element 1: 2
Element 2: 3
Element 3: 4
Element 4: 5

This demonstrates how you can navigate through a sequential list in C++ using a `for` loop and access the elements individually.
*/

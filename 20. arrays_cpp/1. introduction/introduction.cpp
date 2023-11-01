#include <iostream>

int main() {

    // Declaring and initializing an array of integers
    int my_array[5] = {1, 2, 3, 4, 5};

    // Accessing and displaying the elements of the array
    for (int i = 0; i < 5; i++) {
        std::cout << "Element " << i + 1 << ": " << my_array[i] << std::endl;
    }

    return 0;
}

/*
In this example, we create an array of integers named "my_array" with 5 elements and initialize these elements with values from 1 to 5. Then, we use a "for" loop
to access and display the elements of the array.
*/

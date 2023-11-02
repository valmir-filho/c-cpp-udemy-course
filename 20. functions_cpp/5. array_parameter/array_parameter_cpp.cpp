#include <iostream>

// Function that takes an array of integers as a parameter and prints its elements
void print_array(int array[], int size) {
    
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    
    std::cout << std::endl;
}

int main() {
    
    int my_array[] = {1, 2, 3, 4, 5};
    int array_size = 5;

    std::cout << "Original array: ";
    
    print_array(my_array, array_size);

    return 0;
}

/*
In this example, the "print_array" function takes two parameters: an array of integers "array[]" and the size of the array "size". The function iterates through
the array and prints its elements to the screen. In the "main" function, an array named "my_array" is defined with some values, and then the "print_array" function
is called, passing this array and the size as arguments. The function prints the elements of the array to the standard output.
*/

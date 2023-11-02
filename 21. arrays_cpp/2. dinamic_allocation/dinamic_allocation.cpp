#include <iostream>

int main() {

    int size;
    int* dynamic_array;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Allocate memory for the dynamic array using the new operator
    dynamic_array = new int[size];

    if (dynamic_array == nullptr) {
        std::cout << "Memory allocation failed. Exiting..." << std::endl;
        return 1;  // Exit with an error code
    }

    // Initialize the elements of the dynamic array
    for (int i = 0; i < size; i++) {
        dynamic_array[i] = i * 2;
    }

    // Print the contents of the dynamic array
    std::cout << "Dynamic Array Contents: ";
    for (int i = 0; i < size; i++) {
        std::cout << dynamic_array[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate the dynamically allocated memory using delete
    delete[] dynamic_array;

    return 0;  // Exit successfully
}

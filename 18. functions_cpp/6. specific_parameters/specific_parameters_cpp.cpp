#include <iostream>

// Function that takes a parameter by pointer and another by reference
void modify_values(int *pointer, int &reference) {

    // Modifying the value pointed to by the pointer
    *pointer = 20;

    // Modifying the value of the reference
    reference = 30;
}

int main() {
    
    int value1 = 10;
    int value2 = 10;

    // Calling the function and passing a pointer and a reference
    modify_values(&value1, value2);

    std::cout << "Value1 after the function: " << value1 << "." << std::endl;
    std::cout << "Value2 after the function: " << value2 << "." << std::endl;

    return 0;
}

/*
In this example, the modify_values function takes a parameter by pointer (int *pointer) and another by reference (int &reference). Inside the function, the value
pointed to by the pointer is modified to 20, and the value of the reference is modified to 30.

In the main function, the function is called, passing the memory address of "value1" as an argument for the pointer and "value2" as an argument for the reference.
After the function call, you will see that the values of value1 and value2 have been modified, reflecting the changes made within the function.
*/
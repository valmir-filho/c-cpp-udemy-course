// In C++, you can perform input using the "std::cin" object, which is part of the C++ Standard Library's input/output stream facilities. 

#include <iostream>

int main() {

    // Declare a variable to store the user's input
    int user_input;

    // Prompt the user for input
    std::cout << "Please enter an integer: ";

    // Read the input from the user
    std::cin >> user_input;

    // Display the user's input
    std::cout << "You entered: " << user_input << std::endl;

    return 0;
}

/*
Explanations:

- Include the necessary header "<iostream>" for input and output operations.

- Declare a variable "user_input" to store the value entered by the user.

- Prompt the user to enter an integer using "std::cout".

- Read the user's input into the "user_input" variable using "std::cin".

- Finally, display the user's input using "std::cout".

You can modify the code to read different types of input (e.g., float, string) based on your requirements.
*/

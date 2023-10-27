#include <stdio.h>
#include <stdlib.h>

int main() {

    // Creating a integer variable
    int int_number = 5;

    // Printing a integer variable
    printf("The int_number value is: %d. \n", int_number);

    // Creating a float variable
    float float_number = 123.432;

    // Printing a float variable
    printf("The float_number value is: %.2f \n", float_number);

    // Creating a char variable
    char any_char = 'V';

    // Printing a char variable
    printf("The any_char value is: %c \n", any_char);

    // The use of "getchar()"
    printf("Press 'Enter' to finish...");
    getchar();

    return 0;
}

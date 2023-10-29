// In C, strings are treated as character arrays. You can create and access strings using character arrays.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    // String Declaration: you can declare a string in C by defining an array of characters.
    char string1[20];
    /*
    Declares a string with space for 19 characters plus the null character "\0". Note that the last position of the array is reserved for the null character
    "\0", which indicates the end of the string.
    */

    // String initialization: you can initialize a string in several ways.
    // Direct boot
    char string2[] = "Hello, World!";

    // Value assignment after declaration
    char string3[20];
    strcpy(string3, "Hello, World!");  // Using the strcpy function to copy the string
    printf("%s\n", string3);  // Prints "Hello, World!"

    // Print a character of a string
    printf("%c\n", string3[4]);

    /*
    String Manipulation: in C, there are library functions available for working with strings, such as "strcpy", "strcat", "strlen", "strcmp", and more.
    These functions are useful for copying, concatenating, finding the length, and comparing strings.
    */

    // Example of using the "strlen" function to find the length of a string:
    int length = strlen(string3);
    printf("The length of the string is %d.\n", length);

    /*
    Remember that in C, you must be careful when working with strings to avoid buffer overflows and ensure that strings end with the null character "\0".
    Additionally, you can use string manipulation library functions to perform common string processing tasks safely.
    */

    return 0;
}

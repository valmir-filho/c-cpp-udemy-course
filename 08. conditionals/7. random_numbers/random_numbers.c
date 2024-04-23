// To generate random numbers in C, you can use the standard library "stdlib.h" and the functions "rand()" and "srand()".

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize the seed for random number generation
    srand(time(NULL));

    // Generate a random number between 0 and RAND_MAX (a large value)
    int random_num = rand();
    printf("Random number: %d.\n", random_num);

    // To generate random numbers in a specific range, use the modulo operator (%)
    int number_in_range = rand() % 100;  // Generates a number between 0 and 99
    printf("Number in range: %d.\n", number_in_range);

    return 0;
}

/*
In this example, the "srand(time(NULL))" function is used to initialize the seed for random number generation based on the current time. This ensures that the
generated numbers will be different with each execution of the program. The "rand()" function generates random integers in the range from 0 to "RAND_MAX"
(a large value).

To generate random numbers within a specific range, you can use the modulo operator ("%"). In the example, "rand() % 100" generates a random number between 0 and 99.

Make sure to include the "stdlib.h" and "time.h" libraries at the beginning of your program to use these functions.
*/

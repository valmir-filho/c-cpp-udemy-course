// Create an algorithm that performs the pairs numbers between 10 and 20, using the repetition loops: while, do...while, and for.

#include <stdio.h>
#include <stdlib.h>

int main() {

    int number = 10;

    // while

    while (number >= 10 && number <= 20) {
        if (number % 2 == 0) {
            printf("%d\n", number);
        }
        
        number++;
    }

    // do...while

    // do {
    //     if (number % 2 == 0) {
    //         printf("%d\n", number);
    //     }

    //     number++;
    // } while (number >= 10 && number <= 20);
    
    // for

    // for (int number = 10; number <= 20; number++) {
    //     if (number % 2 == 0) {
    //         printf("%d\n", number);
    //     }
    // }
    
    return 0;
}

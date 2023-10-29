// Create an algorithm that performs a countdown from 10 to 0, using the repetition loops: while, do...while, and for.


#include <stdio.h>
#include <stdlib.h>

int main() {

    int countdown = 10;

    // while
    
    while (countdown >= 0) {
        printf("%d\n", countdown);
        countdown--;
    }

    // do...while

    // do {
    //     printf("%d\n", countdown);
    //     countdown--;
    // } while (countdown >= 0);

    // for

    // for (countdown = 10; countdown >= 0; countdown--) {
    //     printf("%d\n", countdown);
    // }
    
    return 0;
}

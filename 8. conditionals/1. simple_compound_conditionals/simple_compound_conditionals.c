#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 10;

    if (x > 10) {
        printf("The number %d is greather than 10.\n", x);
    } else if (x < 10) {
        printf("The number %d is smaller than 10.\n", x);
    } else {
        printf("The number %d is iqual to 10.\n", x);
    }

    return 0;
}

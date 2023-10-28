#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    bool is_raining = true, is_night = true;

    if (!is_raining && !is_night) {
        printf("I'll go to the park.\n");
    } else if (!is_raining && is_night) {
        printf("I'll go to the club.\n");
    } else if (is_raining && !is_night) {
        printf("I'll stay at home studying.\n");
    } else {
        printf("I'll stay at home watching movies.\n");
    }

    return 0;
}

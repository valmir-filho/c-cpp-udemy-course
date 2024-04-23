#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 12.14;
    int b = 5.34;

    // Sum operation
    printf("The sum of %d + %d is %d.\n", a, b, a + b);

    // Subtraction operation
    printf("The subtraction of %d - %d is %d.\n", a, b, a - b);

    // Multiplication operation
    printf("The multiplication of %d * %d is %d.\n", a, b, a * b);

    // Division operation
    printf("The division of %d / %d is %d.\n", a, b, a / b);

    // Remainder of a division operation
    printf("The remainder of a division between %d and %d is %d.\n", a, b, a % b);

    return 0;
}

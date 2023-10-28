// Read 3 values in the same time and multiply them.

#include <stdio.h>
#include <stdlib.h>

int main() {

    int v1, v2, v3, multiplication;

    printf("Enter the value 1, value 2 and value 3 in the same time: ");
    scanf("%d" "%d" "%d", &v1, &v2, &v3);

    multiplication = v1 * v2 * v3;
    printf("The multiplications between %d, %d and %d is %d.\n", v1, v2, v3, multiplication);

    return 0;
}

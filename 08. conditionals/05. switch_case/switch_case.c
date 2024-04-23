#include <stdio.h>
#include <stdlib.h>

int main() {

    int choose;

    printf("Choose an option (1, 2 or 3): ");
    scanf("%d", &choose);
    
    switch (choose) {
        case 1:
            printf("You choose the option 1.\n");
            break;
        case 2:
            printf("You choose the option 2.\n");
            break;
        case 3:
            printf("You choose the option 3.\n");
            break;
        default:
            printf("Error! You choose an invalid option.\n");
            break;
    }

    return 0;
}

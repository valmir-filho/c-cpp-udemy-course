#include <stdio.h>
#include <stdlib.h>

int main() {
    
    // Input a value in a int variable
    int number;
    
    printf("Enter a number: ");
    
    scanf("%d", &number);
    
    printf("You entered the number %d. \n", number);
    
    
    // Input a value in a char variable
    char any_char;

    printf("Enter any char: ");

    fflush(stdin);  // Clean the buffer, to receive a new "scanf"

    scanf("%c", &any_char);
    
    printf("You entered the char %c. \n", any_char);
    
    return 0;
}

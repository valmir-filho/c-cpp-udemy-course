/*
Create a calculator using the switch case that asks the user to provide 4 options:

- 1 for addition;
- 2 for subtraction;
- 3 for multiplication;
- 4 for division.

After the user's choice, the program performs the desired operation, according to the informed numbers."
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    char operator;
    float n1, n2, result;

    printf("Enter the operator (+,-,*,/): ");
    scanf("%c", &operator);

    if (operator == '+' || operator == '-' || operator == '*' || operator == '/') {
        printf("Enter the number 1: ");
        scanf("%f", &n1);

        printf("Enter the number 2: ");
        scanf("%f", &n2);

        switch (operator) {
            case '+':
                result = n1 + n2;
                printf("%.2f + %.2f = %.2f.\n", n1, n2, result);
            break;
            case '-':
                result = n1 - n2;
                printf("%.2f - %.2f = %.2f.\n", n1, n2, result);
            break;
            case '*':
                result = n1 * n2;
                printf("%.2f * %.2f = %.2f.\n", n1, n2, result);
            break;
            case '/':
                if (n2 == 0) {
                    printf("Error! Division by 0.\n");
                } else {
                    result = n1 / n2;
                    printf("%.2f / %.2f = %.2f.\n", n1, n2, result);
                }
                break;            
        }
    } else {
        printf("Error! Invalid operator.\n");
    }
    
    return 0;
}

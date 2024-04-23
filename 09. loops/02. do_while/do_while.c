/*
In C, the "do...while" loop is another type of loop, similar to the "while" loop, but with one crucial difference: a "do...while" loop guarantees that the loop
body will be executed at least once, regardless of the initial condition. This is because the condition is checked after the loop body is executed.

Here's how the "do...while" loop works:

- The code within the "do" block is executed.
- After the code is executed, the condition is evaluated.
- If the condition is true, the loop iterates and repeats the process. If the condition is false, the loop terminates, and the program proceeds with the code after
the "do...while" loop.

Because the condition is checked after the loop body, the code inside the loop will always be executed at least once.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    do {
        printf("Enter a positive number: ");
        scanf("%d", &num);
    } while (num <= 0);
    
    printf("You entered a positive number: %d.\n", num);

    return 0;
}

/*
In this example, the loop will always execute the code within the "do" block at least once, ensuring that the user is prompted for input. It will continue to ask
for input until a positive number is entered.

Use "do...while" loops when you want to guarantee the execution of the loop body at least once and then continue execution based on a condition. This is especially
useful for situations where you need to validate user input or perform an action before checking the condition.
*/
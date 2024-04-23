/*
The "for" loop is another common type of loop in the C programming language. It provides a compact and structured way to perform repetitive tasks by combining
initialization, condition checking, and increment (or decrement) into a single line of code.

Here's how the "for" loop works:

- The "initialization" part is executed only once, at the beginning of the loop. It is typically used to initialize loop control variables.

- The "condition" is evaluated before each iteration. If the condition is true, the loop body is executed. If the condition is false, the loop terminates, and the
program proceeds with the code after the "for" loop.

- After each iteration, the "increment" or "decrement" part is executed. This part is used to modify the loop control variable.

- The loop continues to iterate as long as the condition remains true.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    return 0;
}

/*
In this example, the loop control variable "i" is initialized to 1, the condition checks if "i" is less than or equal to 5, and "i" is incremented by 1 in each
iteration. The loop continues to execute until the condition is false.

The "for" loop is often used when you know in advance how many times you want to execute a block of code or when you need precise control over loop variables.
It's especially useful for iterating through arrays or performing a specific number of iterations.
*/
/*
In C, you can create a constant using the "const" keyword or the "#define" preprocessor directive. Constants are used to define values that should not be changed
during the program's execution, making your code more readable, maintainable, and less error-prone.

- Using "const" keyword:

You can create a constant using the "const" keyword as follows: const int myConstant = 10;

In this example, "myConstant" is declared as a constant integer with a value of 10. Once you assign a value to a "const" variable, you cannot change it later in
the program.

- Using "#define" preprocessor directive:

You can also create constants using the "#define" preprocessor directive. This approach is not a variable declaration but rather a textual substitution, and the
value is replaced wherever you use the constant throughout your code. Here's how to use "#define" to create a constant: #define MY_CONSTANT 10

With this definition, everywhere in your code where you use "MY_CONSTANT", it will be replaced with "10".

When choosing between "const" and "#define" for creating constants, it's generally recommended to use "const" because it provides type safety and better scoping.
In contrast, "#define" does not have a specific type, and its scope is global, which can lead to unexpected behavior if used incorrectly. Additionally, "const"
variables are easier to debug and maintain.
*/

// Example

#include <stdio.h>
#include <stdlib.h>

const int myConst = 10;
#define MY_DEFINE_CONST 20

int main() {
    const int localConst = 30;
    
    printf("myConst: %d.\n", myConst);
    printf("MY_DEFINE_CONST: %d.\n", MY_DEFINE_CONST);
    printf("localConst: %d.\n", localConst);
    
    return 0;
}

/*
In this example, "myConst" is a constant using the "const" keyword, "MY_DEFINE_CONST" is defined using "#define", and "localConst" is a
local constant. All of these can be used as constants with their respective scopes.
*/

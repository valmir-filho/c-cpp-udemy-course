#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("Hello World! \n");
    
    return 0;  // Indicates that the program ran successfully
}

/*
Explanations:

1)

The line "#include <stdio.h>" is a preprocessor directive in C and C++ that includes the header file "stdio.h" in your source code. This header file is part of
the standard library of the C language and provides functionality related to input and output operations.

When you include "#include <stdio.h>", you are essentially instructing the compiler to provide access to the functions and macros defined in this header file. The
primary functionalities provided by "stdio.h" include input and output operations, such as reading from the keyboard and writing to the screen or files.

Some of the most common features provided by "stdio.h" include:

- "printf": Used to print formatted text on the screen or other output devices.
- "scanf": Used to read formatted data from the keyboard or other input devices.
- Functions for file operations, such as "fopen", "fclose", "fread", "fwrite", etc., which allow reading and writing to files.

The inclusion of "#include <stdio.h>" is a common practice in nearly all C programs that involve input and output because it provides access to basic I/O functions. However, in more complex programs, you may also include other specific headers depending on your project's needs.

2)

The line "#include <stdlib.h>" is another preprocessor directive that includes the header file "stdlib.h" in your source code. The "stdlib.h" header file is part
of the standard library of the C and C++ languages and provides functions and macros related to general utility operations, such as memory allocation, type
conversion, program control, and file manipulation.

Some of the most common features provided by "stdlib.h" include:

- Memory Allocation Functions:
   
    - "malloc": Used to dynamically allocate memory during program execution.
    - "free": Used to release memory previously allocated with "malloc".

- Type Conversions:

    - "atoi", "atol", "atof": Used to convert strings into numeric values.
    - "itoa": Used to convert an integer into a string.

- Program Control:

    - "exit": Used to terminate program execution.
    - "system": Used to execute system commands.

- File Manipulation:

    - "fopen", "fclose", "fread", "fwrite", "fclose", among others, are functions for file input/output operations.

Including "#include <stdlib.h>" is a common practice in many C and C++ programs that use features related to dynamic memory allocation, type conversions, and other
general utility operations. You should include this header whenever you need to use the functions and macros provided by the "stdlib" library.
*/

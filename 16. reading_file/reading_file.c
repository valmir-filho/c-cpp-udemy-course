#include <stdio.h>

int main() {

    FILE *file;
    file = fopen("file.txt", "r");

    if (file == NULL) {
        perror("Could not open the file.");
        
        return 1;
    }

    char buffer[1024];

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file);

    if (feof(file)) {
        printf("End of file reached.\n");
    } else if (ferror(file)) {
        perror("Error reading from the file.");

        return 1;
    }

    return 0;
}

/*
- Include the Necessary Header: "#include <stdio.h>". This line includes the standard input/output header ("stdio.h"), which contains functions and data types for
file operations.

- Declare a File Pointer and Open the File:

FILE *file;
file = fopen("file.txt", "r");

- "FILE *file;": declares a pointer to a "FILE" structure, which is used to interact with files.

- "fopen("file.txt", "r");": opens the file named "file.txt" for reading (specified by the "r" mode). If the file doesn't exist, the "fopen" function returns a
"NULL" pointer. The "file" pointer is assigned the address of the opened file.

- Check if the File Was Opened Successfully:**

if (file == NULL) {
    perror("Could not open the file");
    return 1;
}

- The "if" statement checks if the "file" pointer is "NULL", which indicates that the file failed to open.

- "perror("Could not open the file");" is used to print an error message to the standard error stream ("stderr") with the description of the last error that
occurred. In this case, it prints an error message if the file couldn't be opened.

- The program returns 1 to indicate an error and exits.

- Read Data from the File: "char buffer[1024];".

while (fgets(buffer, sizeof(buffer), file) != NULL) {
    printf("%s", buffer);
}

- "char buffer[1024];": declares a character array ("buffer") to store the data read from the file. It's common to read data into a buffer to process it.

- The "while" loop reads data from the file line by line using the "fgets" function. It continues to read until "fgets" returns "NULL", which indicates the end of
the file.

- "fgets(buffer, sizeof(buffer), file)": reads a line from the file pointed to by "file" into the "buffer". The "sizeof(buffer)" argument ensures that no more than
1024 characters are read at a time, preventing buffer overflows.

- "printf("%s", buffer);": Prints the contents of the "buffer" to the standard output.

- Close the File: "fclose(file);". The "fclose" function is used to close the file. It's essential to close the file to release system resources and ensure that
any buffered data is flushed to the file.

- Check for Errors:

if (feof(file)) {
    printf("End of file reached.\n");
} else if (ferror(file)) {
    perror("Error reading from the file");
    return 1;
}

- "feof(file)": checks if the end-of-file indicator is set, which means that the end of the file has been reached.

- "ferror(file)": checks if an error occurred during file reading. If either condition is met, an appropriate message is printed, and the program returns 1 to
indicate an error and exits.

- Return 0 to Indicate Success: "return 0;". If everything goes smoothly, the program returns 0 to indicate successful execution.

This code demonstrates how to open, read, and close a file in C. It also checks for errors during the process and provides error messages when needed.
*/

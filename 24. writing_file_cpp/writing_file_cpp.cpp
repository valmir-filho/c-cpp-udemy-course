#include<iostream>
#include <fstream>

using namespace std;

int main() {

    ofstream out_file;
    out_file.open("file.txt");

    if (!out_file.is_open()) {
        cerr << "Error! It's impossible to open the file." << endl;
        return 1;
    }

    out_file << "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the"
    "1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap"
    "into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum"
    "passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum." << endl;

    out_file.close();

    if (out_file.fail()) {
        cerr << "Error writing to the file." << endl;
        return 1;
    }

    cout << "Data is being written successfully to the file!" << endl;

    return 0;
}

/*
- "#include <iostream>": this line includes the necessary header for input and output operations, such as printing messages to the console.

- "#include <fstream>": this line includes the header required for file input and output operations.

- Create an Output File Stream (ofstream) Object: "ofstream out_file;". Here, an "ofstream" object named "out_file" is created. This object is used to write data to
a file.

- Open the File: "out_file.open("file.txt");". The "open()" method is used to open a file named "file.txt" for writing. If the file doesn't exist, it will be
created. The "if" statement checks if the file was successfully opened. If not, it prints an error message to the standard error ("cerr") and exits the program
with a return code of 1, indicating an error.

- Write Data to the File: "out_file << "These are the data that are being written to the file." << endl;". This line writes the specified text to the file using
the "<<" operator. The "<< endl" is used to add a newline character to the end of the text, so each write goes to a new line in the file.

- Close the File: "out_file.close();". After writing data to the file, it's a good practice to close the file using the "close()" method. This ensures that all the
data has been written and the file is properly closed.

- Check for Write Errors:

if (out_file.fail()) {
    cerr << "Error writing to the file." << endl;
    return 1;
}

This code checks if there was an error during the writing process. If there was an error, it prints an error message to "cerr" and exits the program with a return
code of 1.

- Print a Success Message: "cout << "Data is being written successfully to the file!" << endl;". If everything goes smoothly (the file opens successfully, the data
is written without errors), a success message is printed to the standard output ("cout").

- Return 0 to Indicate Success: "return 0;". The program returns 0 to indicate that it has executed successfully.

Overall, this code demonstrates how to open a file, write data to it, handle errors, and provide status messages during the process. It's a basic example of file
output in C++.
*/

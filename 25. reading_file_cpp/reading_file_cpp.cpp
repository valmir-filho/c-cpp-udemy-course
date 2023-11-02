#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ifstream in_file("file.txt");

    if (!in_file.is_open()) {
        cerr << "Could not open the file." << endl;

        return 1;
    }

    string line;

    while (getline(in_file, line)) {
        cout << line << endl;
    }

    in_file.close();

    return 0;
}

/*
In this C++ code, we use the C++ Standard Library's file input stream ("ifstream") to open, read, and close a file.

- We include the necessary headers: "<iostream>" for input/output, "<fstream>" for file operations, and "<string>" to work with strings.

- We declare an ifstream object named "in_file" and open the file "file.txt" for reading.

- We check if the file was opened successfully. If it fails to open, we print an error message and exit the program with an error code of 1.

- We declare a string variable named "line" to store each line of text read from the file.

- We use a while loop to read lines from the file using "getline()" and print each line to the console using cout.

- After reading all the content, we close the file using the "close()" method.

- If everything goes smoothly, we return 0 to indicate successful execution.
*/

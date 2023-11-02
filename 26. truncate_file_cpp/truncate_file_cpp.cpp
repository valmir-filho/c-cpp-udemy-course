#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ofstream out_file("file.txt", ios::trunc);

    if (!out_file.is_open()) {
        cerr << "Could not open the file." << endl;
 
        return 1;
    }

    // Close the file to ensure it's truncated
    out_file.close();

    if (out_file.fail()) {
        cerr << "Error truncating the file." << endl;
 
        return 1;
    }

    cout << "File has been cleared." << endl;

    return 0;
}

/*
- We include the necessary headers: "<iostream>" for input/output and "<fstream>" for file operations.

- We declare an ofstream object named "out_file" and open the file "file.txt" in "truncate" mode using the "ios::trunc" flag. This mode truncates the file,
effectively clearing its contents.

- We check if the file was opened successfully. If it fails to open, we print an error message and exit the program with an error code of 1.

- We close the file immediately using "out_file.close()". Closing the file at this point truncates the file.

- We check for errors using "out_file.fail()". If there was an error during truncation, we print an error message and exit the program with an error code of 1.

- If everything goes smoothly, we print a message indicating that the file has been cleared.
*/

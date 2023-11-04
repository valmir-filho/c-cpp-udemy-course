#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
using namespace std;

struct person {
    string name;
    long document_number;
};

void print_sequential_list(person *&sequential_pointer, int list_size) {
    int cont;
    cout << "\nSequential List:\n\n";
    for (cont = 0; cont < list_size; cont++) {
        cout << "Position " << cont << " -> " << "Name: " << sequential_pointer[cont].name << " - "
        << "Document number: " << sequential_pointer[cont].document_number << endl;
    }

}

void add_contents_beginning_sequential_list(
    person *&sequential_pointer,
    int *list_size,
    string name,
    long document_number
    ) {
        if (*list_size == 0) {
            person *new_sequential_list = new person[1];
            new_sequential_list[0].name = name;
            new_sequential_list[0].document_number = document_number;
            sequential_pointer = new_sequential_list;   
        } else {
            person *new_sequential_list = new person[*list_size + 1];
            new_sequential_list[0].name = name;
            new_sequential_list[0].document_number = document_number;
            int cont;
            for (cont = 0; cont < *list_size; cont++) {
                new_sequential_list[cont + 1].name = sequential_pointer[cont].name;
                new_sequential_list[cont + 1].document_number = sequential_pointer[cont].document_number;
            }
            sequential_pointer = new_sequential_list;
        }
        *list_size = *list_size + 1;
}

int main() {
    int user_option = 0;
    person *sequential_pointer;
    int list_size = 0;
    string name;
    long document_number;
    person *sequential_list_example = new person[1];
    sequential_pointer = sequential_list_example;
    while (user_option != 9) {
        print_sequential_list(sequential_pointer, list_size);
        cout << "\n∞∞∞ Main Menu ∞∞∞\n";
        cout << "\nOptions:\n\n";
        cout << "1 - Insert a node at the beginning of the list.\n";
        cout << "2 - Insert a node at the end of the list.\n";
        cout << "3 - Insert a node at any position of the list.\n";
        cout << "4 - Delete a node at the beginning of the list.\n";
        cout << "5 - Delete a node at the end of the list.\n";
        cout << "6 - Delete a node at any position of the list.\n";
        cout << "7 - Search a node of the list.\n";
        cout << "8 - Print the list.\n";
        cout << "9 - Exit the system.\n\n";
        cout << "Choose an option and press ENTER: ";
        cin >> user_option;
        if (user_option < 1 || user_option > 9) {
            cout << "\nError! invalid option, try again.\n";
        } else {
            switch (user_option) {
                case 1:
                    cout << "\nYou selected option 1: Insert a node at the beginning of the list.\n\n";
                    cout << "Insert a name: ";
                    cin >> name;
                    cout << "Insert a Document number: ";
                    cin >> document_number;
                    add_contents_beginning_sequential_list(sequential_pointer, &list_size, name, document_number);
                    break;
                case 2:
                    cout << "\nYou selected option 2.\n";
                    break;
                case 3:
                    cout << "\nYou selected option 3.\n";
                    break;
                case 4:
                    cout << "\nYou selected option 4.\n";
                    break;
                case 5:
                    cout << "\nYou selected option 5.\n";
                    break;
                case 6:
                    cout << "\nYou selected option 6.\n";
                    break;
                case 7:
                    cout << "\nYou selected option 7.\n";
                    break;
                case 8:
                    cout << "\nYou selected option 8.\n";
                    break;
                case 9:
                    cout << "\nYou selected option 9.\n";
                    break;
            }
        }
    }
    cout << "\nThank's for using the system!\n\n";
    return 0;
}

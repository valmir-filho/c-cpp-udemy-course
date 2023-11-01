// In C++, a structure is a user-defined data type that allows you to group together variables of different data types under a single name.

#include <iostream>
using namespace std;

// Define a structure called "Person" with member variables
struct Person {
    string name;
    int age;
    double height;
};

int main() {

    // Create an instance of the "Person" structure
    Person person1;

    // Initialize the member variables of the "person1" structure
    person1.name = "Alice";
    person1.age = 30;
    person1.height = 5.8;

    // Access and display the information
    cout << "Name: " << person1.name << "." << endl;
    cout << "Age: " << person1.age << " years old." << endl;
    cout << "Height: " << person1.height << " feet." << endl;

    return 0;
}

/*
In this example, we've defined a "Person" structure with three member variables: "name", "age", and "height". We then create an instance of the "Person" structure
called "person1" and initialize its member variables. Finally, we access and display the information stored in "person1".

Structures in C++ are similar to classes but have all their members as public by default, which means that you can access the member variables directly, as shown
in the example.
*/

// You can nest structures within other structures in C++ to create more complex data structures.

#include <iostream>
using namespace std;

// Define a structure called "Address" to store address information
struct Address {
    string street;
    string city;
    string state;
    string postalCode;
};

// Define a structure called "Person" that includes an "Address" structure
struct Person {
    string name;
    int age;
    Address address;
};

int main() {

    // Create an instance of the "Person" structure
    Person person1;

    // Initialize the member variables, including the nested "Address" structure
    person1.name = "Bob";
    person1.age = 25;
    person1.address.street = "123 Main St";
    person1.address.city = "Anytown";
    person1.address.state = "CA";
    person1.address.postalCode = "12345";

    // Access and display the information
    cout << "Name: " << person1.name << "." << endl;
    cout << "Age: " << person1.age << " years old." << endl;
    cout << "Address: " << person1.address.street << ", " << person1.address.city << ", " << person1.address.state << " " << person1.address.postalCode << "."
    << endl;

    return 0;
}
/*
In this example, we have two structures, "Address" and "Person". The "Person" structure includes a member variable of type "Address", creating a nested structure.
We then create an instance of the "Person" structure, "person1", and initialize its member variables, including the nested "Address" structure.

You can access the nested structure"s member variables using the dot (".") operator, as demonstrated in the "cout" statement to display the address information
within the "Person" structure.
*/

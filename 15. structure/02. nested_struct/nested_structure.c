/*
You can define a structure inside another structure in C. This is commonly known as a nested structure. Nested structures are useful when you want to represent a
hierarchical relationship between data elements.
*/

#include <stdio.h>
#include <string.h>

// Define a struct for an address
struct Address {
    char street[50];
    char city[30];
    char state[20];
    char zip[10];
};

// Define a struct for a person with an address
struct Person {
    char name[50];
    int age;
    struct Address address;  // Nest the Address struct
};

int main() {

    // Declare and initialize a Person struct
    struct Person person1;
    
    strcpy(person1.name, "Alice");
    person1.age = 25;

    // Initialize the nested Address struct
    strcpy(person1.address.street, "123 Main St");
    strcpy(person1.address.city, "Anytown");
    strcpy(person1.address.state, "CA");
    strcpy(person1.address.zip, "12345");

    // Access and print the information
    printf("Name: %s.\n", person1.name);
    printf("Age: %d years.\n", person1.age);
    printf("Address: %s, %s, %s %s.\n", person1.address.street, person1.address.city, person1.address.state, person1.address.zip);

    return 0;
}

/*
In this example, we define two structures: "Address" and "Person". The "Person" structure contains a member of type "Address", which makes it a nested structure.
You can access the members of the nested structure using the dot operator (".""), just like you would with any other structure.

This allows you to represent complex data structures where one type of data (in this case, an address) is a part of another data structure (a person's information). Nested structures are especially useful when you need to model real-world relationships and hierarchies in your data.
*/

/*
In the C language, a "struct" (short for "structure") is a composite data type that allows you to group different variables of different types into a single unit.
Structs are often used to create custom data structures for storing related information in an organized way. Each variable within a struct is called a "member."
*/

#include <stdio.h>
#include <string.h>

// Definition of a struct
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    
    // Declaration and initialization of a variable of type Person
    struct Person person1;
    
    strcpy(person1.name, "John");
    person1.age = 30;
    person1.height = 1.75;

    // Accessing the struct members
    printf("Person 1\n");
    printf("Name: %s.\n", person1.name);
    printf("Age: %d years.\n", person1.age);
    printf("Height: %.2f meters.\n", person1.height);

    return 0;
}

/*
In this example, we create a struct called "Person" that contains three members: "name", "age", and "height". We then declare a variable named "person1" of type
"Person" and initialize its members with values.

To access the members of a struct, you use the dot operator ("."). For example, "person1.name" accesses the "name" member of the struct.

Structs are often used to create custom data structures in C, such as employee records, elements of a linked list, student records, and more. They are useful for
organizing related information into a single object, which makes the code more readable and maintainable.

Keep in mind that by default, the members of a struct have the same scope as the struct itself, meaning they are accessible only within the block where the struct
was declared. Additionally, you can create arrays and pointers of structs, allowing for the creation of more complex data structures.
*/

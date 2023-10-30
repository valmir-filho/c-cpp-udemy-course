/*
Pointers are a fundamental concept in C++ and many other programming languages. They allow you to directly access and manipulate your program's memory, which is
useful for tasks like dynamic memory allocation and resource management.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 10;

    // Use "%p" to print the memory address for variable "x"
    printf("%p\n", (void*)&x);

    int y = 20;
    
    /*
    A pointer is a variable that stores the memory address of another variable. In C++, you declare a pointer using the "* operator. Declaration of a pointer to an
    integer. "pointer_y" now contains the memory address of the variable y.
    */   
    int* pointer_y = &y;

    printf("%d\n", *pointer_y);

    /*
    Dynamic memory allocation: pointers are often used to dynamically allocate memory on the heap (memory allocated at runtime). You can use "new" to allocate
    memory and "delete" to release it.
    */
    int* dynamic_int = new int;  // Allocates an integer on the heap
    
    *dynamic_int = 42;
    
    delete dynamic_int;  // Releases the allocated memory

    // Arrays and pointers: in C++, arrays and pointers are closely related. An array is essentially a pointer to its first element
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;  // Pointer to the first element of the array

    // You can access array elements using ptr[0], ptr[1], and so on
    printf("%d\n", ptr[0]);

    /*
    Null pointer: a null pointer is a pointer that does not point to a valid memory address. In C++, you can set a pointer to null using nullptr. This is preferred
    over using NULL in C++.
    */
    int* null_ptr = nullptr;

    // Constant pointers: you can have pointers that do not allow modification of the values they point to using the const qualifier
    const int* read_only_ptr;  // Cannot modify the value but can change to point to another address
    int const* same_as_above;  // Alternative syntax

    /*
    Pointer to pointer: you can have pointers that point to other pointers. This is useful in various situations, especially in array allocation and functions that
    want to modify a pointer.
    */
    int z = 10;
    int* ptr1 = &z;
    int** ptr2 = &ptr1;  // Pointer to a pointer to an integer. "ptr2" points to "ptr1", which in turn points to z

    /*
    Pointers are a fundamental part of the C++ language and are often used in situations where direct control of memory is necessary. However, they require careful
    attention to avoid security issues such as memory leaks and invalid accesses. Therefore, when using pointers, it's important to fully understand what you're
    doing and consider safe programming practices.
    */
    
    return 0;
}

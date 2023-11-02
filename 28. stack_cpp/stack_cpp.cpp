#include <iostream>
#include <stack>

int main() {

    std::stack<int> stack;

    // Pushing elements into the stack
    stack.push(10);
    stack.push(20);
    stack.push(30);

    // Accessing the top element of the stack
    std::cout << "Top element: " << stack.top() << std::endl;

    // Popping the top element from the stack
    stack.pop();

    // Checking if the stack is empty
    if (stack.empty()) {
        std::cout << "The stack is empty." << std::endl;
    } else {
        std::cout << "The stack is not empty." << std::endl;
    }

    // Getting the size of the stack
    std::cout << "Stack size: " << stack.size() << "." << std::endl;

    return 0;
}

#include <iostream>

char return_char() {
    
    return 'D';
}

int main() {
    
    char my_char = return_char();

    std::cout << "The returned char is: " << my_char << "." << std::endl;

    return 0;
}

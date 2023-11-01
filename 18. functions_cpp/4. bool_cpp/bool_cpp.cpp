#include <iostream>

bool is_even(int number) {
    
    if (number % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    
    int num = 6;

    bool result = is_even(num);

    if (result) {
        std::cout << num << " is even." << std::endl;
    } else {
        std::cout << num << " is odd." << std::endl;
    }

    return 0;
}

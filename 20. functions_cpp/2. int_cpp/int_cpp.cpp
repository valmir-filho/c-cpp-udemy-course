#include <iostream>

int sum(int a, int b) {
    
    int result = a + b;
    
    return result;
}

int main() {
    
    int num1 = 5;
    int num2 = 7;

    int result = sum(num1, num2);
    
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << result << "." << std::endl;

    return 0;
}

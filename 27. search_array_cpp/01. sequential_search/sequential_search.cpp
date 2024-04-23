#include <iostream>

int main() {

    int array[] = {10, 20, 30, 40, 50};
    int array_size = sizeof(array) / sizeof(array[0]);
    int search_element = 20;
    bool found = false;

    for (int i = 0; i < array_size; i++) {
        if (array[i] == search_element) {
            found = true;
            std::cout << "Element found at position " << i  << " in the array." << std::endl;
            break;
        }
    }

    if (!found) {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}

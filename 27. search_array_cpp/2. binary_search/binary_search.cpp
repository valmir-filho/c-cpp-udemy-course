#include <iostream>
#include <algorithm>

int main() {
    
    int array[] = {10, 20, 30, 40, 50};
    int array_size = sizeof(array) / sizeof(array[0]);
    int search_element = 30;

    bool found = std::binary_search(array, array + array_size, search_element);
    int position = -1;

    if (found) {
        position = std::lower_bound(array, array + array_size, search_element) - array;
        std::cout << "Element found at position " << position  << " in the array." << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}

/*
Observation: keep in mind that binary search only works on sorted arrays. If the array is not sorted, you must first sort it using the "std::sort" function or
implement your own sorting logic."
*/

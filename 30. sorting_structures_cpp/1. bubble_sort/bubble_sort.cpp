#include <iostream>

void bubble_sort(int arr[], int n) {

    bool swapped;
    
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
    
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
    
        // If no elements were swapped in the inner pass, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array before sorting: ";
    
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    bubble_sort(arr, n);

    std::cout << "\nArray after sorting: ";
   
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << "\n";

    return 0;
}

/*
In this example, the "bubble_sort" function takes an array of integers and its size "n". It uses two nested loops to traverse the array and swap adjacent elements
whenever they are out of order. The outer loop ensures that the process is repeated until no elements need to be swapped.

Please note that "Bubble Sort" is not the most efficient choice for sorting large data sets, but it is useful for educational purposes and for understanding the
basic principles of sorting algorithms.
*/
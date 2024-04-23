#include <iostream>

void selection_sort(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) {
        int min_index = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        // Swap the found minimum element with the element at index i
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main() {

    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array before sorting: ";

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    selection_sort(arr, n);

    std::cout << "\nArray after sorting: ";

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << "\n";

    return 0;
}

/*
In this example, the "selection_sort" function takes an array of integers and its size "n". It sorts the array using the Selection Sort algorithm. The main idea
behind Selection Sort is to divide the array into a sorted and an unsorted portion. In each iteration, it finds the minimum element from the unsorted portion and
swaps it with the element at the current position in the sorted portion.

The outer loop, controlled by the variable "i", iterates through the array and selects the minimum element in the unsorted portion using the inner loop. The
variable "min_index" keeps track of the index of the minimum element found.

After the "selection_sort" function is called, the array will be sorted in ascending order.
*/

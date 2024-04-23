#include <iostream>

void insertion_sort(int arr[], int n) {
    
    for (int i = 1; i < n; i++) {
    
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array before sorting: ";
    
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    insertion_sort(arr, n);

    std::cout << "\nArray after sorting: ";

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    
    std::cout << "\n";

    return 0;
}

/*
In this example, the "insertion_sort" function takes an array of integers and its size "n". It sorts the array using the Insertion Sort algorithm. The main idea
behind Insertion Sort is to divide the array into a sorted and an unsorted portion. It iterates through the unsorted portion, selects an element, and inserts it
into its correct position in the sorted portion.

The outer loop, starting from the second element, iterates through the unsorted portion. The inner while loop compares the current element ("key") with the elements
in the sorted portion and shifts elements to the right to make space for the "key" until the correct position is found.

After the "insertion_sort" function is called, the array will be sorted in ascending order.
*/

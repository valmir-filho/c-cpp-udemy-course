#include <iostream>

void swap(int& a, int& b) {

    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high) {

    int pivot = arr[high];  // Choose the last element as the pivot
    int i = (low - 1);  // Index of the smaller element

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return (i + 1);
}

void quick_sort(int arr[], int low, int high) {

    if (low < high) {
        int pi = partition(arr, low, high);
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

int main() {

    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array before sorting: ";

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    quick_sort(arr, 0, n - 1);

    std::cout << "\nArray after sorting: ";

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << "\n";

    return 0;
}

/*
In this example, the "quick_sort" function takes an array of integers, the low index, and the high index. It sorts the array using the Quick Sort algorithm, which
is a divide-and-conquer algorithm. The "partition" function is used to select a pivot element and partition the array into two subarrays: elements less than the
pivot and elements greater than the pivot.

The main steps of the Quick Sort algorithm are as follows:

- Select a pivot element (in this example, the last element).
- Partition the array into two subarrays such that elements less than the pivot are on the left and elements greater than the pivot are on the right.
- Recursively apply Quick Sort to the left and right subarrays.

After the "quick_sort" function is called, the array will be sorted in ascending order.
*/

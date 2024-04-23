#include <iostream>

void shell_sort(int arr[], int n) {

    // Start with a large gap and reduce it over multiple passes
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // Perform an insertion sort for elements at each gap
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }

            arr[j] = temp;
        }
    }
}

int main() {

    int arr[] = {12, 34, 54, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array before sorting: ";
    
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    shell_sort(arr, n);

    std::cout << "\nArray after sorting: ";
    
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << "\n";

    return 0;
}

/*
In this example, the "shell_sort" function takes an array of integers and its size "n". Shell Sort is an improvement over the Insertion Sort algorithm and is known
for its performance in practice.

The key idea behind Shell Sort is to use an insertion sort-like algorithm with varying gap sizes. It starts with a relatively large gap and gradually reduces the
gap size until it becomes 1, which is equivalent to a standard insertion sort. This process allows elements to move more quickly into their correct positions.

After the "shell_sort" function is called, the array will be sorted in ascending order.
*/

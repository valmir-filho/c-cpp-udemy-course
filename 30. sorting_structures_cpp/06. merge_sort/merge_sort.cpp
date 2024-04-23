#include <iostream>
#include <vector>

void merge(std::vector<int>& arr, int left, int middle, int right) {

    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Create temporary arrays to hold the two halves
    std::vector<int> left_arr(n1);
    std::vector<int> right_arr(n2);

    // Copy data to the temporary arrays leftArr[] and rightArr[]
    for (int i = 0; i < n1; i++) {
        left_arr[i] = arr[left + i];
    }
    
    for (int i = 0; i < n2; i++) {
        right_arr[i] = arr[middle + 1 + i];
    }

    // Merge the two temporary arrays back into arr[left..right]
    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (left_arr[i] <= right_arr[j]) {
            arr[k] = left_arr[i];
            i++;
        } else {
            arr[k] = right_arr[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements of leftArr[]
    while (i < n1) {
        arr[k] = left_arr[i];
        i++;
        k++;
    }

    // Copy any remaining elements of rightArr[]
    while (j < n2) {
        arr[k] = right_arr[j];
        j++;
        k++;
    }
}

void merge_sort(std::vector<int>& arr, int left, int right) {

    if (left < right) {
        int middle = left + (right - left) / 2;

        // Sort first and second halves
        merge_sort(arr, left, middle);
        merge_sort(arr, middle + 1, right);

        // Merge the sorted halves
        merge(arr, left, middle, right);
    }
}

int main() {

    std::vector<int> arr;
    arr.push_back(12);
    arr.push_back(11);
    arr.push_back(13);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);

    int n = arr.size();

    std::cout << "Array before sorting: ";

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    merge_sort(arr, 0, n - 1);

    std::cout << "\nArray after sorting: ";

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << "\n";

    return 0;
}

/*
In this example, the "merge_sort" function takes a vector of integers, the left and right indices, and sorts the vector using the Merge Sort algorithm. Merge Sort
is a divide-and-conquer algorithm that divides the array into two halves, recursively sorts them, and then merges the sorted halves.

The merge function is responsible for merging two sorted subarrays into a single sorted array. The "merge_sort" function recursively divides the array until it
reaches single-element subarrays and then combines them into a fully sorted array.

After the "merge_sort" function is called, the vector will be sorted in ascending order.
*/

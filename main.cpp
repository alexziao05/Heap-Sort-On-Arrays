#include <iostream>
using namespace std;

void PercolateUp (int currIndex, int arr[]) {
    while (currIndex > 0) {
        int parent = (currIndex - 1) / 2;

        if (arr[currIndex] >= arr[parent]) {
            // No violation
            return;
        } else {
            swap (arr[currIndex], arr[parent]);
            currIndex = parent;
        }
    }
}

void swap (int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void heapify (int arr[], int n) {
    for (int i = 1; i < n; i++) {
        PercolateUp (i, arr);
    }
}

// Main function to perform heap sort on the array
void heapSort (int arr[], int n) {
    // Step 1: Build a max-heap

    heapify(arr, n);


// Step 2: Extract elements from the heap one by one

// Step 3: Down Heapify

}


// Function to print the array
void printArray (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Test array
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array:\n";
    printArray(arr, n);

    cout << "Heapify array:\n";
    heapSort(arr, n);
    printArray(arr, n);

    // Call the heapSort function
    heapSort(arr, n);

    cout << "Sorted array:\n";
    printArray(arr, n);

    return 0;
}
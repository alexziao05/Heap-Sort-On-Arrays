#include <iostream>
using namespace std;


void heapify(int arr[], int n) {
    // Your code here
    // Build the heap
}

// Main function to perform heap sort on the array
void heapSort(int arr[], int n) {
    // Step 1: Build a max-heap

    heapify(arr, n);


// Step 2: Extract elements from the heap one by one

// Step 3: Down Heapify

}


// Function to print the array
void printArray(int arr[], int n) {
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

    // Call the heapSort function
    heapSort(arr, n);

    cout << "Sorted array:\n";
    printArray(arr, n);

    return 0;
}
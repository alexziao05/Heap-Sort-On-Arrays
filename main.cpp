#include <iostream>
using namespace std;

/* heapify assumes array is partially sorted */

void heapify (int arr[], int n) {

    int i = 0;

    while (2 * i + 1 < n) {

        int maxVal = i;

        int leftChild = 2 * i + 1;
        int rightChild = 2 * i + 2;

        if (leftChild < n && arr[leftChild] < arr[maxVal]) {
            maxVal = leftChild;
        }

        if (rightChild < n && arr[rightChild] < arr[maxVal]) {
            maxVal = rightChild;
        }

        if (maxVal == i) {
            return;
        }

        swap(arr[i], arr[maxVal]);
        i = maxVal;
    }
}

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

// Main function to perform heap sort on the array

void heapSort (int arr[], int n) {

    // Step 1: Build a max-heap

    for (int i = 1; i < n; i++) {
        PercolateUp(i, arr);
    }

    // Step 2: Extract elements from the heap one by one

    for (int i = n-1; i > 0; i--) {
        swap (arr[0], arr[i]);
        heapify (arr, i);
    }

    // Step 3: Reverse the array

    int left = 0;
    int right = n -1;
    while (left < right) {
        swap (arr[left], arr[right]);
        left++;
        right--;
    }
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
    int arr[] = {72, 20, 58, 1, 69, 89, 68, 27, 22, 52, 96, 78, 1, 38, 61, 60, 46, 17, 14, 78, 67, 61, 25, 82, 21, 50, 11, 80, 52, 11, 86, 9, 60, 44, 66, 36, 79, 4, 78, 81, 71, 27, 87, 62, 25, 15, 1, 19, 71, 22};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array:\n";
    printArray(arr, n);

    // Call the heapSort function
    heapSort(arr, n);

    cout << "Sorted array:\n";
    printArray(arr, n);

    return 0;
}
#include <iostream>
#include <cstdlib>  // for rand()
#include "sort.h"

const int SIZE = 100;

void printArr(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
        if ((i + 1) % 20 == 0) std::cout << "\n"; // break line every 20 elements
    }
    std::cout << "\n";
}

int main() {
    int original[SIZE];
    for (int i = 0; i < SIZE; i++) {
        original[i] = rand() % 100;
    }

    // Create copies for each sort
    int bubbleArr[SIZE], selectionArr[SIZE], insertionArr[SIZE];
    std::copy(original, original + SIZE, bubbleArr);
    std::copy(original, original + SIZE, selectionArr);
    std::copy(original, original + SIZE, insertionArr);

    std::cout << "Original Unsorted Array: "<<std::endl;
    printArr(original, SIZE);

    bubbleSort(bubbleArr, SIZE);
    std::cout << "Bubble Sorted Array: "<<std::endl;
    printArr(bubbleArr, SIZE);

    selectionSort(selectionArr, SIZE);
    std::cout << "Selection Sorted Array: "<<std::endl;
    printArr(selectionArr, SIZE);

    insertionSort(insertionArr, SIZE);
    std::cout << "Insertion Sorted Array: "<<std::endl;
    printArr(insertionArr, SIZE);

    return 0;
}

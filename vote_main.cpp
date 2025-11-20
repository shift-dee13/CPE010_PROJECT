#include <iostream>
#include <cstdlib>  // for rand()
#include "vote_sort.h"

const int SIZE = 100;


void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
        if ((i + 1) % 20 == 0) std::cout << " "<<std::endl;
    }
    std::cout << "\n";
}

// Manual array copy
void copyArray(const int source[], int destination[], int size) {
    for (int i = 0; i < size; i++) {
        destination[i] = source[i];
    }
}

int main() {
    int original[SIZE];
    int bubbleArr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        original[i] = rand() % 100;
    }

    copyArray(original, bubbleArr, SIZE);

    std::cout << "Original Unsorted Array: "<<std::endl;
    printArray(original, SIZE);

    bubbleSort(bubbleArr, SIZE);
    std::cout << "Bubble Sorted Array (Descending): "<<std::endl;
    printArray(bubbleArr, SIZE);

    return 0;
}

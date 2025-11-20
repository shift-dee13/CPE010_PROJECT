//
// Created by faith on 9/18/2

#ifndef DSA_VOTE_SORT_H
#define DSA_VOTE_SORT_H
#include <iostream>

// bubble sort (descending order)
template <typename T>
void bubbleSort(T arr[], size_t arrSize) {
    for (int i = 0; i < arrSize; i++) {
        for (int j = i + 1; j < arrSize; j++) {
            if (arr[j] > arr[i]) {
                std::swap(arr[j], arr[i]);
            }
        }
    }
}


#endif

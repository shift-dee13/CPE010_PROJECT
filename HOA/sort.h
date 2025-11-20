#ifndef DSA_SORT_H
#define DSA_SORT_H
#include <iostream>


// bubble sort
template <typename T>
void bubbleSort(T arr[], size_t arrSize){
    for(int i= 0; i < arrSize; i++){
        for(int j = i+1; j < arrSize; j++){
            if(arr[j] > arr[i]){
                std::swap(arr[j], arr[i]);
            }
        }
    }
};


//selection sort (array, size of array)
template <typename T> int Routine_Smallest(T A[], int K, const int arrSize);
template <typename T>
void selectionSort(T arr[], const int n) {
    int POS, temp, pass = 0;
    for (int i = 0; i < n; i++) {
        POS = Routine_Smallest(arr, i, n);
        temp = arr[i];

        arr[i] = arr[POS];
        arr[POS] = temp;

        pass++;
    }
}

// routine smallest (array, current position, size of array)
template <typename T>
int Routine_Smallest(T A[], int K, const int arrSize) {
    int position, j;
    T smallestElem = A[K];
    position = K;
    for (int j= K+1; j < arrSize; j++) {
        if (A[j] < smallestElem) {
            smallestElem = A[j];
            position = j;
        }
    }
    return position;
}

//insertion sort
template <typename T>
void insertionSort(T arr[], const int n) {
    int K = 0, j, temp;
    while (K < n) {
        temp = arr[K];
        j = K-1;
        while (temp <= arr[j]) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
        K++;
    }
}
#endif //DSA_SORT_H

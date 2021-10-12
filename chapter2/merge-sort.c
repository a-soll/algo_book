// 10-11-2021
#include "../util.h"
#include <stdio.h>

#define LENGTH 8

void merge(int arr[], int start, int middle, int end) {
    int l_size = (middle - start) + 1;
    int r_size = end - middle;
    int L[l_size];
    int R[r_size];

    for (int i = 0; i < l_size; i++) {
        L[i] = arr[start + i - 1];
    }
    for (int j = 0; j < r_size; j++) {
        R[j] = arr[j + middle];
    }

    int i = 0;
    int j = 0;

    /*
        - loop from start to end, sorting both halves
        - need to make sure k and j aren't bigger than L/R size to prevent adding out of bounds trash
     */
    for (int k = start - 1; k < end; k++) {
        if ((L[i] <= R[j] || j >= r_size) && i < l_size) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
    }
}

void sort(int arr[], int start, int end) {
    if (start < end) {
        int middle = (start + end) / 2;

        sort(arr, start, middle);
        sort(arr, middle + 1, end);
        merge(arr, start, middle, end);
    }
}

int main() {
    int arr[LENGTH] = {3, 41, 52, 26, 38, 57, 9, 49};

    sort(arr, 1, LENGTH);
    parr(arr, LENGTH);
}

// 03-21-2021
#include "../util.h"
#include <stdio.h>

#define LENGTH 4

void merge(int a[], int start, int q, int end) {
    int n1 = q - start + 1;
    int n2 = end - q;
    int i;
    int j;
    int R[n1 + 1];
    int L[n2 + 1];

    for (int i = 0; i < n1; i++) {
        L[i] = a[start + i - 1];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = a[q + j];
    }

    L[n1 + 1] = 99;
    R[n2 + 1] = 99;
    i = 0;
    j = 0;

    for (int k = start - 1; k < end; k++) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
    }
}

void sort(int a[], int start, int end) {
    if (start < end) {
        int q = (start + end) / 2;

        sort(a, start, q);
        sort(a, q + 1, end);
        merge(a, start, q, end);
        // printf("%d\n", q);
        parr(a, LENGTH);
    }
}

int main() {
    int a[LENGTH] = {4, 3, 2, 1};

    sort(a, 1, LENGTH);

    // parr(a, LENGTH);
    return 0;
}

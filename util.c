#include <stdio.h>
#include "util.h"

// print array
void parr(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

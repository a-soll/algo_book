// 03-21-2021
#include "../util.h"
#include <stdio.h>

#define LENGTH 5

int main() {
    int arr[LENGTH] = {5, 3, 6, 2, 7};
    int spot; // index of smallest current number
    int min;  // value of smallest current number

    for (int i = 0; i < LENGTH - 1; i++) {     // c1    n
        min = arr[i];                          // c2    n - 1
        spot = i;                              // c3    n - 1
        for (int j = i; j < LENGTH - 1; j++) { // c4    E(n, i = 0)  (t.i)
            if (arr[j] < min) {                // c5    E(n, i = 0)  (t.i - 1)
                min = arr[j];                  // c6    E(n, i = 0)  (t.i - 1)
                spot = j;                      // c7    E(n, i = 0)  (t.i - 1)
            }
        }
        arr[spot] = arr[i]; // c8    n - 1
        arr[i] = min;       // c9     n - 1
    }

    parr(arr, LENGTH);

    return 0;
}

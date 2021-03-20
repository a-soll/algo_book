// 03-20-2021
#include <stdio.h>

void parr(int a[]) {
    int k = 0;

    while (a[k]) {
        printf("%d ", a[k]);
        k++;
    }
    printf("\n");
}

// insertion sort to get decrementing order
int main() {
    const int length = 6;
    int a[6] = {31, 20, 59, 26, 41, 58};

    for (int j = 1; j < length; j++) {
        int key = a[j];
        int i = j - 1;

        while (i >= 0 && a[i] < key) {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = key;
    }
    parr(a);
    return 0;
}

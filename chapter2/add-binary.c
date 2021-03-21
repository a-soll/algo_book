#include <stdio.h>

#define LENGTH 4
#define RESULT 5

void parr(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int a[LENGTH] = {1, 0, 0, 1};
    int b[LENGTH] = {0, 0, 1, 1};
    int c[RESULT];
    int carry = 0;

    for (int i = LENGTH - 1; i >= 0; i--) {
        int sum = a[i] + b[i] + carry;

        if (sum == 2) {
            c[i + 1] = 0;
            carry = 1;
        } else if (sum == 3) {
            c[i + 1] = 1;
            carry = 1;
        } else {
            c[i + 1] = sum;
            carry = 0;
        }
    }
    c[0] = carry;
    parr(c, RESULT);

    return 0;
}

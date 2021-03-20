// 03-20-2021
#include <stdio.h>

int main() {
    const int length = 6;
    int a[6] = {5, 2, 4, 6, 1, 3};

    /*  Initialization
        - j = 1 is correct before first iteration
        - subarray a[0..j - 1] consists of just a[0]
        - a[0] is 'sorted' and shows loop invariant holds true

        Maintenance
        - loop is moving a[j - 1++] one spot right until proper spot
        - subarray a[0..j] consists of original elements in sorted order
        - increments j for next iteration, preserving invariant

        Termination
        - termination condition is j > a.length = n
        - because each iteration increases j by 1, termination must have j = n + 1
        - we end up with a[0..n] being original elements, but in sorted order
        - because subarray a[0..n] is entire array, we know it's sorted
    */
    for (int j = 1; j < length; j++) {
        int key = a[j];
        // insert a[j] into the sorted sequence a[0..j - 1]
        int i = j - 1;
        while (i >= 0 && a[i] > key) {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = key;
    }

    int k = 0;
    while (a[k]) {
        printf("%d ", a[k]);
        k++;
    }
    return 0;
}

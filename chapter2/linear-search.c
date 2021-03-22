// 03-20-2021
#include <stdio.h>

int main() {
    int len = 6;
    int a[6] = {1, 5, 12, 7, 32, 6};
    int val = 7;
    int ind = -1;
    int j;

    /*  Initialization
        - j = 0 is correct before first iteration
        - ind eauals the index val is found (NULL, because no index searched yet)

        Maintenance
        - loop is moving a[j++]
        - ind is set to the index that matches val

        Termination
        - termination condition is j >= len
        - because each iteration increases j by 1, termination will end
        with j = len
        - final result is ind equals the index of the array
        val is found in
   */
    for (j = 0; j < len; j++) {
        if (a[j] == val) {
            ind = j;
        }
    }

    printf("%d\n", ind);

    return 0;
}

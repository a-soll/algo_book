// 03-20-2021
#include <stdio.h>

int main() {
    int len = 6;
    int a[6] = {1, 5, 12, 7, 32, 6};
    int val = 112;
    int ind = '\0';
    int j;

    /*  Initialization
        - j = 0 is correct before first iteration
        - ind eauals the index val is found (NULL, because no index searched yet)

        Maintenance
        - loop is moving a[]
        - ind equals index val is found

        Termination
        - j = len + 1
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

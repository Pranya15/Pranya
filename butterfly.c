#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows for the butterfly pattern: ");
    scanf("%d", &n);

    // Upper half of the butterfly
    for (i = 1; i <= n; i++) {
        // Print leading stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Print spaces in the middle
        for (j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        // Print trailing stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the butterfly
    for (i = n; i >= 1; i--) {
        // Print leading stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Print spaces in the middle
        for (j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        // Print trailing stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int a, b = 0;
    printf("Enter number to check: ");
    scanf("%d", &a);

    if (a == 1) {
        printf("Not prime");
        return 0;
    }

    for (int i = 2; i <= a / 2; i++) {
        if (a % i == 0) {
            b = 1;
            break;
        }
    }

    if (b == 1)
        printf("Number is not prime");
    else
        printf("Number is prime");

    return 0;
}

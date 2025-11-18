#include <stdio.h>
int main() {
    int n;
    scanf("%d" ,&n);
    if (n % 3 == 0 && n % 5 == 0) printf("FizzBuzz\n");
    if (n % 3 == 0) printf("Fizz\n");
    if (n % 5 == 0) printf("Buzz\n");
    else printf("%d\n",n);
    return 0;
}
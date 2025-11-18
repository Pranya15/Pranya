#include <stdio.h>

int main() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);   // takes input only until space
    printf("You entered: %s\n", name);
    return 0;
}

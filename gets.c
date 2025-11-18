#include <stdio.h>

int main() {
    char name[50];
    printf("Enter your full name: ");
    gets(name);   // takes entire line including spaces
    printf("You entered: %s\n", name);
    return 0;
}

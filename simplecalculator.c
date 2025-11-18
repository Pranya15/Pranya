#include<stdio.h>
int main(){
    int choice;
    float a,b;
    printf("1.add\n 2.sub\n 3.multiply\n 4.divide\n");
    printf("Enter your choice");
    scanf("%d",&choice);

    printf("Enter two numbers:");
    scanf("%f %f", &a,&b);
    switch(choice){
        case 1: printf("sum= %.2f\n" , a+b); break;
        case 2: printf("sub= %.2f\n" , a-b); break;
        case 3: printf("product= %.2f\n" , a*b); break;
        case 4:
        if(b != 0) printf("Quotient = %.2f\n", a/b);
        else printf("Error! Division by 0\n");
        break;
        default("Invalid chhoice\n");
    }
    return 0;
}
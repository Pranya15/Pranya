#include<stdio.h>
int main(){
    int choice;
    float r, l, b, s;
    printf("1: circle\n 2:rectangle\n 3: square\n");
    printf("Entter your choice");
    scanf("%d",&choice);

    switch (choice){
    case 1: printf("Enter radius:");
            scanf("%f" ,&r);
            printf("Area = %.2f\n",3.14*r*r);
            break;
    case 2: printf("Enter length and radius:");
            scanf("%f %f", &r,&l);
            printf("Area = %.2f\n" ,l*b);
            break;
    case 3: printf("Enter side:");
            scanf("%f", &s);
            printf("Area = %.2f\n" ,s*s);
          break;
    default: printf("Invalid choice");
    }
    return 0;
}
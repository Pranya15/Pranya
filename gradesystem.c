#include<stdio.h>
int main(){
    char grade;
    printf("Enter Grade A,B,C,D,F:");
    scanf("%c",&grade);
    switch(grade){
        case 'A': printf(" Execellent"); break;
        case 'B': printf("Good"); break;
        case 'C': printf("Average"); break;
        case 'D': printf("Below Average"); break;
        case 'F': printf("fail"); break;
        default : printf("Invalid grade");
    }
    return 0;
}
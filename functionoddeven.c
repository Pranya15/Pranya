#include<stdio.h>
int oddeven(){
int n;
printf("Enter the value of n:");
scanf("%d",&n);
if(n%2==0)
printf("Even");
else 
printf("Odd");
}
int main(){
    oddeven();
}
#include<stdio.h>
int main(){
     int a=2;
     int b=5;
     printf("%d ",a);
     printf("%d \n",b);
     a=a^b;
     b=a^b;
     a=a^b;
     printf("%d ",a);
     printf("%d ",b);
}
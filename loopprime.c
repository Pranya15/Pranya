#include<stdio.h>
int main(){
    int n=6,i,flag=0;
    if(n<=1){
        printf("not prime\n");
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
        if(flag == 00)
            printf("it is prime\n");
        else{
            printf("it is not prime");
        }
    
    return 0;
}
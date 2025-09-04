#include<stdio.h>
int main(){
    int n=11,i,isPrime=1;
    if(n<=1){
        printf("not prime\n");
        return 0;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            isPrime=0;
            break;
        }
    }
        if(isPrime)
            printf("it is a prime no.\n");
        else{
            printf("it is not a prime no.");
        }
    
    return 0;
}
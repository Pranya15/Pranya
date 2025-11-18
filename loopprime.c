#include<stdio.h>
int main(){
    int n=21;
    int isPrime=1;
    if(n<=1){
        printf("not prime");
        return 0;
    }
    for(int i=2;i<n;i++){ 
       if(n%i==0){
        isPrime=0;
        break;
       }
    }
        if(isPrime){
            printf("it is a prime no.\n");
        }
        else{
            printf("it is not a prime no.");
        }
return 0;
    }


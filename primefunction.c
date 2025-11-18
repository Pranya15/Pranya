#include<stdio.h>
int prime(){
    int n=21;
    int isprime=1;
    if(n<=1){
        printf("not prime");
        return 0;
    }
    for(int i=2;i<n;i++){ 
       if(n%i==0){
        isprime=0;
        break;
       }
    }
    if(isprime){
        printf("no. is prime");
    }
}
int main(){
    prime();
}

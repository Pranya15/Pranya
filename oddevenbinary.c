#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    //if(n)- then the if statement will run for only non zero number
    if(n&1){
        printf("ODD");
    }
    else{
        printf("EVEN");
    }
}

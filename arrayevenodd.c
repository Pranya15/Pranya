#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5},i;
    for(i=0;i<5;i++){
        if(arr[i]%2==0){
            printf("\neven");
        }
        else{
            printf("\nodd");
        }
    }
}
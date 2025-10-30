#include<stdio.h>
int main(){
    int arr[5]={2,3,4,2,3};
    int n=0;
    for(int i=0;i<5;i++){
        n=n^arr[i];
    }
    printf("%d",n);
}

#include<stdio.h>
int sum (int arr[],int n){
    if (n==0){
        return 0;
    }
    return arr[n-1]+sum(arr,n-1);
}
int main(){
    int arr[5]={21,9,23,24,15};
    int n=5;
    int data=sum(arr,n);
    printf ("%d",data);
}

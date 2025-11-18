#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int i,min=arr[0];
    for(i=1;i<5;i++);{
        if(arr[i]>min){
            min=arr[i];
        }
    }
    printf("Minimum element=%d\t",min);
}
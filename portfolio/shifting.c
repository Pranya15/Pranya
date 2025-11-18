#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int a=arr[0];
    for(int i=0;i<5;i++){
      arr[i]=arr[i+1];
    }
    arr[4]=a;
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
#include<stdio.h>
int sorted(int arr[],int i, int j){
 if(i>=j){
  return 1;
 }
 if(arr[i]>arr[i+1]){
    return 0;
 }
 return sorted(arr,i+1,j);
}
int main(){
    int arr[]={1,2,3,4};
    int i=0,j=3;
    int result=sorted(arr,i,j);
    printf("%d",result);
}
#include <stdio.h>
int binarysearch(int arr[],int i,int j, int target){
    if(i>j){
        return -1;
    }
    int mid=(i+j)/2;
    if(arr[mid]==target){
        return mid;
    } else if(arr[mid]<target){
        return binarysearch(arr, mid+1,j,target);
    }
     else
     return binarysearch(arr,i,mid-1,target);
}
int main(){
    int arr[5]={1,2,3,4,5};
    int target=3,i=0,j=4;
    int data=binarysearch(arr,i,j,target);
    if(data==-1)
    printf("not found");
    else
    printf("found");
}
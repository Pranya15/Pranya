#include<stdio.h>
int bsearch(int arr[5]){
    int s=0;
    int end=4;
    int t=4;
    while(s<=end){
        int mid=(s+end)/2;
        if(arr[mid]==t){
            return mid;
        }
        else if(arr[mid<t]){
            s=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int t=4;
    int result=bsearch(arr);
    if(result!=-1){
        printf("Element found at index %d\n",result);
    }
    else{
        printf("Element not found\n");
    }
    return 0;
}
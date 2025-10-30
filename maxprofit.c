#include<stdio.h>
int main(){
int arr[]={3,2,0,6,2};
int min=arr[0];
int minindex=0;
for(int i=0;i<5;i++){
    if(arr[i]<min){
        min=arr[i];
         minindex=i;
    }
}
int max=0;
for(int i=minindex;i<5;i++){
     int profit=arr[i]-min;
    if(profit>max){
        max=profit;
    }
}
 printf("%d",max);
}

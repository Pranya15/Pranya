#include<stdio.h>
#include<stdlib.h>
int main(){
 int n;

 printf("Enter sizel:");
 scanf("%d",&n);
  int *arr=(int *)malloc(n* sizeof(int));
  printf("Enter %d elements:\n",n);
  for(int i=0;i<n;i++)
  scanf("%d",&arr[i]);
  printf("Array elements are:\n");{
    for(int i=0;i<n;i++)
    printf("%d",&arr[i]);
  }
  return 0;
}

/*#include<stdio.h>
int main(){
    int n=8,t1=0,t2=1,next,i;
    for(i=1 ;i<=n ;i++){
     printf("%d",t1);
     next=t1+t2;
     t1=t2;
     t2=next;
    }
    return 0;
}*/
#include<stdio.h>
int main(){
    int n,t1=0,t2=1,next,i=1;
    printf("enter n:");
    scanf("%d",&n);
    printf("fibonacci series :");
    while(i<=n){
        printf("%d",t1);
        next=t1+t2;
        t1=t2;
        t2=next;
        i++;
    }
    return 0;
}
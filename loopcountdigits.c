#include<stdio.h>
int main(){
    int num,count=0;
    printf("Enter a no.");
    scanf("%d",&num);
    if(num==0){
        count=1;
    } else{
        if(num<0){
            num =-num;
        }
            while( num !=0){
                num =num/10;
                count ++;
            }
    }
    printf("Total digits =%d",count);
    return 0;
}
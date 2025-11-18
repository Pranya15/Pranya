#include<stdio.h>
int main(){
    int num;
    printf("Enter no.");
    scanf("%d",&num);
    int original=num;
    int res=0;
    while(num!=0){
        int lastdigit=num%10;
        res=res*10+lastdigit;
        num=num/10;
    }
    if(original==res){
        printf("p");
    } else{
        printf("not");
    }
    return 0;
}
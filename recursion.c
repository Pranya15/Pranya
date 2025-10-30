#include<stdio.h>
void sum(int a){ //a is parameter
   // return a;
   if(a==0){
    return;
   }
   sum(a-1);
   printf("%d",a);
}
int main(){
    sum(5);
    
}

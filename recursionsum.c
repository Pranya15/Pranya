#include<stdio.h>
int sum(int a){ //a is parameter
   // return a;
   if(a==0){
    return 0;
   }
   return a+sum(a-1);
   
}
int main(){
   int data= sum(5);
   printf("%d",data);
    
}
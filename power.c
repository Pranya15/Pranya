#include<stdio.h>
#include<math.h>

int power(int a,int n){ //a is parameter
   // return a;
   if(a==0){
    return 1;
   }
  return  a*pow(a,n);
}
int main(){ 
  int data= pow(5,2);
  printf("%d",data);
    
}
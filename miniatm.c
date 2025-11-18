#include<stdio.h>
int main(){
    int choice;
    float balance = 10000,amount;
    printf("1:Check Balance\n 2:withdraw\n 3:deposit\n 4:exit\n");
    printf("Enter choice:\n");
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("Current Balance= %.2f\n", balance); break;
        case 2: printf("Enter amount to withdraw:");
                scanf("%f" , &amount);
                if(amount <= balance){
                balance -= amount;
                printf("Withdraw successful New Balance = %.2f\n" ,balance);
                } else{
                    printf("Insufficient Balance!\n");
                }
                break;
         case 3: printf("Enter amount to deposit:");
                 scanf("%f" ,&amount)  ;
                 balance += amount;
                 printf("Deposit successful New Balance = %.2f\n" ,balance);
                 break;
         case 4: printf("Thankyou !!! exit....\n");
                 break;
         default :("Invalid choice:\n");       
    }
    return 0;
}
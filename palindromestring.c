#include<stdio.h>
#include<string.h>
int main(){
    char name[]="radar";
    char rev[10];
    int i;
    char ln=strlen(name);
    for(i=0;i<ln;i++){
        rev[i]=name[ln-1-i];
    }
    rev[i]='\0';
    for(i=0;i<ln;i++){
        if(name[i]!=rev[i]){
            printf("not a palindrome");
            return 0;
        }
    }
    printf("palindrome");
    return 0;
}
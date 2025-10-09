#include<stdio.h>
#include<string.h>
int main(){
    char str[]="hallo";
    char target='a';
    char nstr[100];
    int j=0;
    int ln= strlen(str);
    for(int i=0;i<ln;i++){
        if(str[i]!=target){
            nstr[j]=str[i];
            j++;
        }
    }
    nstr[j]='\0';
    printf("%s",nstr);

}
#include<stdio.h>
#include<string.h>
int main(){
    char name[]="hie";
    char data[10];
    for(int i=0;name[i]!='\0';i++){
        data[i]=name[i];
    }
    //strcpy(data,name);
    printf("copied:%s",data);
    return 0;
}
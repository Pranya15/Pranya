#include<stdio.h>
#include<string.h>
int main(){
    char name[]="hello";
    int len=strlen(name);
    char dup[20];
    int count;
    int i,j;
    for(i=0;i<len;i++ ){
         count=0;
        for(j=0;j<i;j++){
            if(name[i]==name[j]){
                count++;
                break;
            }
        }
        if(count==0){
           printf("%c",name[i]);
        }
    }

    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="hello";
    char str2[]="hii";
    int ln1=strlen(str1);
    int ln2=strlen(str2);
    int i,j;
    int found=0;
    for(i=0;i<ln1;i++){
        for(j=0;j<ln2;j++){
            if(str1[i]==str2[j]){
                printf("%c",str1[i]);
                found=1;
                break;
            }
        }
    }
    if(!found)
    printf("NONE");
    return 0;
}
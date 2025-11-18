#include<stdio.h>
#include<string.h>
int main(){
    char str[]="abcabd";
    int ln=strlen(str);
    int freq[256]={0};
    for( int i=0;i<ln;i++){
        freq[str[i]]++;
    }
    for(int i=0;i<ln;i++){
      if(freq[str[i]]==1){
        printf("%c",str[i]);
                
        continue;
      }
     }
    return 0;
    }
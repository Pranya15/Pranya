#include<stdio.h>
int main(){
    for(int i=3;i>=0;i--){ //i=o;i<3;i++
        for(int j=0;j<=i;j++){// j=3;j>=0;j--
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
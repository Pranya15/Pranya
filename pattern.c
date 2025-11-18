#include<stdio.h>
int main(){
    for(int i=0;i<3;i++){ //i=0 then j will run
        for(int j=0;j<3;j++){ //j will run 3 times and will print $ after that i=1 and then j will run and so on..
            printf("$");
        }
        printf("\n");
    }
    return 0;
}
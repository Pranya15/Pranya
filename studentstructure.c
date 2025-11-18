#include<stdio.h>
struct student{
    char name[50];
    int rollno;
};
int main(){
    struct student s1[5];
    for(int i=0;i<5;i++){
        printf("Enter your name:");
        scanf("%spranya",s1[i].name);
        printf("Enter your roll no:");
        scanf("%d",&s1[i].rollno);
    }
    printf("---Student Details---\n");
    for(int i=0;i<5;i++){
        printf("Name:%s,Rollno:%d\n",s1[i].name,s1[i].rollno);
    }
    return 0;
}
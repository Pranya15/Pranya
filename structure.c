#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int rollno;
    int age;
};
int main(){
    struct student s1;
    s1.age=19;
    printf("%d",s1.age);
    printf("Enter Name:");
    return 0;
}
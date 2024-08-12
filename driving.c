#include<stdio.h>
int main(){
    int age;
    printf ("enter age");
    scanf("%d",&age);

    age>=18 ? printf("adult for driving car\n") : printf("not eligible for car driving\n");
}
#include<stdio.h>
int main(){
    int i=1,sum=0;
    do{
        sum += i;
        i++;
    }
    while(i<=10);
    printf("the number is %d",sum);
}
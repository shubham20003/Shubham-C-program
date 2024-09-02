#include<stdio.h>

float average(int a, int b,int c){
    return (a+b+c)/3;
}

int main(){
    int a=3, b=7 , c=8;

printf("average of 3 number is %f",average(a,b,c));

}
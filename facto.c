#include<stdio.h>


int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }

    return factorial (n-1)*n;
    }


    int main(){
        int a =6;

        printf("the number is %d and factorial is %d",a,factorial(a));
        return 0;
    }
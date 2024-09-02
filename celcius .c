#include<stdio.h>

int c2f(float c){
    

    return (((c) * 9/5)+32);

}

int main(){
    float c=67;
    printf("celcius to fharenhite is %f to %d",c,c2f(c));
}
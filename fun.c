#include<stdio.h>

void hello();
void hello_hi();
void bye();

void hello(){
    printf("hello to me\n");
}

void hello_hi(){
    printf("hello to hi\n");

}

void bye(){
    printf("bye");
}
int main(){

    hello();
    
    hello_hi();

    bye();
}
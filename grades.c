#include <stdio.h>

int main() {
    int grade;
    printf("enter grade");
    scanf("%d",&grade);
    
    if(grade>=90){
        printf("You got an A");
    }
    else if(grade<=90 && grade>=80){
        printf("You got a B");
    }
    else{
        return 0;
    }
        

    
    
}


#include <stdio.h>

int main(){
    int nums[3];

    printf("enter the numbers");
    scanf("%d",&nums[3]);

      if(nums[0]==nums[1]||nums[1]==nums[2]||nums[2]==nums[0])
    {
        printf("True");
    }
    else{
        printf("False");
    }
    
    return 0;
}
#include <stdio.h>

int main(){
    int n,i;
    
    printf("enter n");
    scanf("%d",&n);

    for(i=10;i;i--){
        printf(" %d X %d = \n",i,n,n*i);
    }
    return 0;
}
#include <stdio.h>

int main(){
    int i ,n;
    printf("enter n\n");
    scanf("%d",&n);

    for(i=1;i<11;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }

    return 0;
}
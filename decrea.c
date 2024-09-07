#include<stdio.h>
int main()
{
    int i , n=10;;

    for(i=0;i<=n;i++){
        if(i==5){
            continue;
        }
        printf("%d\n",i);
    }
    
}
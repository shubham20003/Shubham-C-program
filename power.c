#include<stdio.h>
#include<math.h>
int main()
{
    int a , b;
    printf("enter a");
    scanf("%d",&a);

    printf("enter b");
    scanf("%d",&b);

    int power = pow(a,b);
    printf("power of two number is %d", power);
}
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter number 1:");
    scanf("%d",&a);

    printf("enter number 2:");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("after swapping: %d %d\n",a,b);
    return 0;
}
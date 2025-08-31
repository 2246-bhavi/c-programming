//Q6: Write a program to swap two numbers using a third variable.

#include<stdio.h>
int main()
{
    int a,b,t;
    printf("enter number1:");
    scanf("%d",&a);

    printf("enter number 2:");
    scanf("%d",&b);

    printf("\nbefore swapping: a=%d, b=%d\n",a,b);

    t=a;
    a=b;
    b=t;

    printf("\nafter swapping: a=%d,b=%d\n",a,b);
    return 0;


}

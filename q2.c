//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main()
{
    int a,b,sum,diff,mul,div;
    printf("enter first number:");
    scanf("%d",&a);

    printf("enter second number:");
    scanf("%d",&b);

    sum=a+b;
    diff=a-b;
    mul=a*b;
    div=a/b;

    printf("sum of the numbers is:%d\n",sum);
    printf("difference of the numbers is:%d\n",diff);
    printf("product of the numbers is:%d\n",mul);
    printf("division of the numbers is:%d\n",div);
    return 0;

}

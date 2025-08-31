//Q16: Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter number 1:");
    scanf("%d",&x);

    printf("enter number 2:");
    scanf("%d",&y);

    printf("enter number 3:");
    scanf("%d",&z);

    if(x > y && x> z)
    {
        printf("largest is:%d",x);

    }
    else if(y> x && y> z)
    {
        printf("largest is:%d",y);

    }
    else
    {
        printf("largest is:%d",z);
    }
    return 0;
    }
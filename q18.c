//Q18: Write a program to assign grades based on a percentage input.

#include<stdio.h>
int main()
{
    int x;
    printf("enter percentage:");
    scanf("%d",&x);

    if(x>=90 && x<=100)
    {
        printf("Grade:A");
    }
    else if(x>=80 && x<=89)
    {
        printf("Grade:B");
    }
    else if(x>=70 && x<=79)
    {
        printf("Grade:C");
    }
    else if(x>=60 && x<=69)
    {
        printf("Grade:D");
    }
    else if(x>=50 && x<=59)
    {
        printf("Grade:E");
    }
    else
    {
        printf("fail");
    }
    return 0;
}
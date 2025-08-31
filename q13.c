//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>
int main()
{
    int yr;
    printf("enter the year:");
    scanf("%d",&yr);
    if(yr%400==0)
    {
        printf("it is a leap year\n");
    }
    else if(yr%100==0)
    {
        printf("it is not a leap year\n");
    }
    else if(yr%400)
    {
        printf("it is a leap year");

    }
    else
    {
        printf("it is not a leap year");
    }
    return 0;


}

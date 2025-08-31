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
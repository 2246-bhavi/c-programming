//Write a program to check if a number is an Armstrong number.

#include<stdio.h>
int main()
{
    int x,t,r,result=0;
    printf("enter number:");
    scanf("%d",&x);
    t=x;
    while(x!=0)
    {
        r=x%10;
        result+=r*r*r;
        x=x/10;
    }
    if(result==t)
    {
        printf("\narmstrong");
    }
    else
    {
        printf("\nnot armstrong");
    }
    return 0;
    

}
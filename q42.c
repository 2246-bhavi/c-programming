//Write a program to check if a number is a perfect number.

#include<stdio.h>
int main()
{
    int i,x,sum=0;
    printf("enter number:");
    scanf("%d",&x);
    for(i=1; i<=x/2; i++)
    {
        if(x%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==x)
    {
        printf(" perfect");
    }
    else{
        printf("not perfect");
    }
    return 0;
}
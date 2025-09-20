//Write a program to print all factors of a given number.

#include<stdio.h>
int main()
{
    int x,i;
    printf("enter number:");
    scanf("%d",&x);
    for(i=1; i<=x; i++)
    {
        if(x%i==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
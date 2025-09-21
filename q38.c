//Write a program to find the sum of digits of a number.

#include<stdio.h>
int main()
{
    int x,sum=0;
    printf("enter number:");
    scanf("%d",&x);
    while(x!=0)
    {
        sum=sum+x%10;
        x=x/10;
    }
    printf("sum of digits:%d",sum);
    
    return 0;
}
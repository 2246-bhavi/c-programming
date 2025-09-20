//Write a program to reverse a given number.

#include<stdio.h>
int main()
{
    int x,r,rev=0;
    printf("Enter number:");
    scanf("%d",&x);
    while(x!=0)
    {
        r=x%10;
        rev=rev*10+r;
        x=x/10;

    }
    printf("reverse:%d",rev);
    return 0;
}

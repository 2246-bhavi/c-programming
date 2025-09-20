//Write a program to check if a number is a palindrome.

#include<stdio.h>
int main()
{
    int t,x,r,rev=0;
    printf("enter number:");
    scanf("%d",&x);
    t=x;
    while(x!=0)
    {
        r=x%10;
        rev=rev*10+r;
        x=x/10;
    }
    printf("reverse of the number:%d",rev);
    if(rev==t)
    {
        printf("\npalindrome");
    }
    else
    {
        printf("\nnot palindrome");
    }
    return 0;
}
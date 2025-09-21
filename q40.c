//Write a program to find the 1’s complement of a binary number and print it.

#include<stdio.h>
int main()
{
    long n,result=0,multiplier=1;
    int x;
    printf("enter a binary number:");
    scanf("%lld",n);

    while(n!=0)
    {
        x=n%10;
        if(x==0)
        {
            result+=1*multiplier;
        }
        else
        {
            result+=0*multiplier;

            multiplier+=10;
            n/=10;
        }
    }
    printf("1's complement:%lld\n",result);
    return 0;
}
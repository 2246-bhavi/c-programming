//Write a program to find the product of odd digits of a number.

#include<stdio.h>
int main()
{
    int n,x,product=1;
    printf("enter number:");
    scanf("%d",&n);
    while(n!=0)
    {
        x=n%10;
        if(x%2!=0){
            product*=x;
        }
        n=n/10;
    }
    printf("product of odd numbers:%d\n",product);
    return 0;
}

//Write a program to calculate the factorial of a number.

#include<stdio.h>
int main()
{
    int i,n,sum=1;
    printf("Enter size:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("%d ",i);
        sum=sum*i;

    }
    printf("\nfactorial of numbers is:%d",sum);
    return 0;
}
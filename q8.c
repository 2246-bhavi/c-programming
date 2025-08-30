#include<stdio.h>
int main()
{
    int x,i,sum=0;
    printf("enter number:");
    scanf("%d",&x);
    for(i=1; i<=x; i++)
    {
        printf("%d\n",i);
        sum=sum+i;

    }
    printf("sum is:%d\n",sum);
    return 0;
}
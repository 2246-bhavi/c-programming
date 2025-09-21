//Find the sum of array elements.

#include<stdio.h>
int main()
{
    int arr[100],i,x,sum=0;
    printf("enter size:");
    scanf("%d",&x);

    for(i=0; i<x; i++)
    {
        printf("enter elements:");
        scanf("%d",&arr[i]);
    }
    for(i=0; i<x; i++)
    {
        sum=sum+arr[i];
    }
    printf("\nsum:%d",sum);
    return 0;
}
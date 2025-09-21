//Reverse an array without taking extra space.

#include<stdio.h>
int main()
{
    int arr[100];
    int i,x;
    printf("enter size:");
    scanf("%d",&x);
    for(i=0; i<x; i++)
    {
        printf("enter elements:");
        scanf("%d",&arr[i]);
    }
   
    for(i=x-1; i>=0; i--)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
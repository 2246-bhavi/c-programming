//Read and print elements of a one-dimensional array.

#include<stdio.h>
int main()
{
    int arr[100],i,x;
    printf("enter size:");
    scanf("%d",&x);
    for(i=0; i<x; i++)
    {
        printf("enter elements:");
        scanf("%d",&arr[i]);
    }
    printf("\nscanned values:");
    for(i=0; i<x; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}
//Find the maximum and minimum element in an array.

#include<stdio.h>
int main()
{
    int arr[100];
    int i,max=0,min,x;
    printf("enter size:");
    scanf("%d",&x);
    for(i=0; i<x; i++)
    {
        printf("enter elements:");
        scanf("%d",&arr[i]);
    }
    for(i=0; i<x; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("max element:%d",max);
    printf("\nmin element:%d",min);
    return 0;
}
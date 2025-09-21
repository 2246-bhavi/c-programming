//Search for an element in an array using linear search.

#include<stdio.h>
int main()
{
    int arr[100];
    int x,i,loc,found=0,num;
    printf("enter size:");
    scanf("%d",&x);
    for(i=0; i<x; i++)
    {
        printf("enter elements:");
        scanf("%d",&arr[i]);
    }
    printf("enter a number:");
    scanf("%d",&num);
    for(i=0; i<x; i++)
    {
        if(num==arr[i])
        {
            found=1;
            loc=i;
        }
        
    }
    if(found)
        {
            printf("number is present at %d in array",loc);
        }
    return 0;

}
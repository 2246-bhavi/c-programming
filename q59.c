//count even and odd numbers in an array.

#include<stdio.h>
int main()
{
    int arr[100],i,x;
    int odd=0,even=0;
    printf("enter size:");
    scanf("%d",&x);
    for(i=0; i<x; i++)
    {
        printf("enter elements:");
        scanf("%d",&arr[i]);

    }
    for(i=0; i<x; i++)
    {
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("even count:%d",even);
    printf("\nodd count:%d",odd);
    return 0;

}
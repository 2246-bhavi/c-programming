//Count positive, negative, and zero elements in an array

#include<stdio.h>
int main()
{
    int arr[100];
    int i,x;
    int pos=0,neg=0,zero=0;
    printf("enter size:");
    scanf("%d",&x);
    for(i=0; i<x; i++)
    {
        printf("enter elements:");
        scanf("%d",&arr[i]);

    }
    for(i=0; i<x; i++)
    {
        if(arr[i]>0){
            pos++;
        }
        else if(arr[i]<0){
            neg++;
        }
        else{
            zero++;
        }
    }
    printf("positive count:%d",pos);
    printf("\nnegative count:%d",neg);
    printf("\nzero count:%d",zero);
    return 0;
}
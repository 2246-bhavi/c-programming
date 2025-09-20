//Write a program to print the sum of the first n odd numbers.

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter size:");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        if(i%2==1)
        {
            printf("%d ",i);
            sum=sum+i;
        } 
    }
     printf("\nsum is:%d",sum); 
    return 0;
}

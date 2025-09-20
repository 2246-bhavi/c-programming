//Write a program to print the product of even numbers from 1 to n.

#include<stdio.h>
int main()
{
    int n,i,sum=1;
    printf("enter size:");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        if(i%2==0)
        {
            printf("%d ",i);
            sum=sum*i;
        }
    }
    printf("\nproduct is:%d",sum);
    return 0;
}

//Write a program to check if a number is a strong number.

#include<stdio.h>
int main(){
    int num,rem,fac,sum=0,temp,i;
    printf("enter number:");
    scanf("%d",&num);
    temp=num;
    
    while(temp!=0)
    {
        rem=temp%10;
        fac=1;
        for(i=1; i<=rem; i++)
        {
            fac=fac*i;
        }
        sum=sum+fac;
        temp=temp/10;
    }
    printf("Sum of factorials of digits: %d\n", sum);
    if(sum==num)
    {
        printf("\nstrong number");
    }
    else{
        printf("\nnot a strong number");

    }
    return 0;
}


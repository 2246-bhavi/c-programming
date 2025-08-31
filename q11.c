//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>
int main()
{
        int x;
        printf("enter a number:");
        scanf("%d",&x);
        if(x%2==0)
        {
            printf("number is even");
        }
        else
        {
            printf("number is odd");
        }
      return 0;

    }

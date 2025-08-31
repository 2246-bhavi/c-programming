//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,si,ci;
    printf("enter principal amount:");
    scanf("%f",&p);

    printf("enter ROI:");
    scanf("%f",&r);

    printf("enter time:");
    scanf("%f",&t);

    si=p*r*t/100;
    ci=p*pow(1+r/100,t)-p;

    printf("simple interest is:%f\n",si);
    printf("compound interest is:%f\n",ci);

}

//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("enter three sides:");
    scanf("%d %d %d",&s1,&s2,&s3);

    if(s1==s2 && s2==s3)
    {
        printf("it is an equilateral triangle");
    }
    else if(s1==s2 || s2==s3 || s3==s1)
    {
        printf("it is an isoceles triangle");
    }
    else
    {
        printf("is it a scalene triangle");
    }
    return 0;

}

//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main()
{
    int l,b,perimeter,area;
    printf("enter length:");
    scanf("%d",&l);

    printf("enter breadth:");
    scanf("%d",&b);

    perimeter=2*(l+b);
    area=l*b;

    printf("the perimeter of the rectangle is:%d\n",perimeter);
    printf("the area is:%d",area);
    return 0;

}

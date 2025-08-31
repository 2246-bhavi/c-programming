//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main()
{
    int celcius,fahrenheit;
    printf("enter temperature in celcius:");
    scanf("%d",&celcius);

    fahrenheit=celcius*9/5+32;

    printf("temperature in fahrenheit is:%d",fahrenheit);
    return 0;

}

//Toggle case of each character in a string.

#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    printf("enter name:");
    gets(name);


    strupr(name);
    printf("\nUpper case:%s",name);

    strlwr(name);
    printf("\nLower case:%s",name);

    return 0;
}
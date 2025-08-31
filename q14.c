//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>
int main()
{
    char ch;
    printf("enter an alphabet:");
    scanf("%c",&ch);
    
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
            printf("it is a vowel\n");

    }
    else{
        printf("it is a consonant");
    }
    return 0;

}

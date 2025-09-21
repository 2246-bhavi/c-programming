//Q25:Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter ur op:");
    scanf("%c",&op);
    
    printf("Enter your numbers:");
    scanf("%d %d",&a, &b);

    switch(op)
    {
        case '+':
            printf("%d",a+b);
            break;
        
        case '-':
            printf("%d",a-b);
            break;
        
        case '*':
            printf("%d",a*b);
            break;

        default:
            printf("%d",a/b);
            break;
    }
    return 0;
    
}


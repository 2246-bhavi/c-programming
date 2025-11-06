//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, j, k, maxLen = 0;

    printf("Enter a string: ");
    gets(s);

    int n = strlen(s);

    for(i = 0; i < n; i++)
    {
        int count = 1;
        for(j = i + 1; j < n; j++)
        {
            int repeat = 0;
            for(k = i; k < j; k++)
            {
                if(s[k] == s[j])
                {
                    repeat = 1;
                    break;
                }
            }
            if(repeat == 1)
                break;
            count++;
        }
        if(count > maxLen)
            maxLen = count;
    }

    printf("Length of longest substring without repeating characters = %d\n", maxLen);

    return 0;
}

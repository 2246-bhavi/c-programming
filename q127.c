//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>

int main()
{
    FILE *input, *output;
    char ch;

    input = fopen("input.txt", "r");
    if(input == NULL)
    {
        printf("Input file not found!");
        return 0;
    }

    output = fopen("output.txt", "w");

    while((ch = fgetc(input)) != EOF)
    {
        if(ch >= 'a' && ch <= 'z')
            ch = ch - 32;

        fputc(ch, output);
    }

    fclose(input);
    fclose(output);

    printf("File converted to uppercase and saved to output.txt");

    return 0;
}

//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[50];
    char text[200];

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");

    if(fp == NULL)
    {
        printf("File not found.");
        return 0;
    }

    printf("Enter text to append: ");
    getchar();          
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}
this is appended text
hola guys

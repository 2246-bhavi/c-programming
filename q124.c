#include <stdio.h>

int main()
{
    FILE *source, *dest;
    char sourceFile[50], destFile[50];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    source = fopen(sourceFile, "r");
    if(source == NULL)
    {
        printf("Source file not found.");
        return 0;
    }

    dest = fopen(destFile, "w");

    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, dest);
    }

    fclose(source);
    fclose(dest);

    printf("File copied successfully to %s", destFile);

    return 0;
}

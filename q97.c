//Print the initials of a name.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100], initials[50];
    int i, j = 0;

    printf("Enter your full name: ");
    gets(name);

    if (name[0] != ' ')
        initials[j++] = name[0];

    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ')
            initials[j++] = name[i];
    }

    initials[j] = '\0';

    printf("Initials: ");
    for (i = 0; initials[i] != '\0'; i++) {
        printf("%c", initials[i]);
        if (initials[i + 1] != '\0')
            printf(".");
    }

    return 0;
}


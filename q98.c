//Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    printf("Enter your full name: ");
    gets(name);

    printf("Result: ");

    if (name[0] != ' ')
        printf("%c.", name[0]);

    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ') {
            // Check if this is the start of the last word
            int j = i;
            while (name[j] != '\0' && name[j] != ' ')
                j++;
            if (name[j] == '\0') {
                printf(" %s", &name[i]);
                break;
            } else {
                printf("%c.", name[i]);
            }
        }
    }

    return 0;
}

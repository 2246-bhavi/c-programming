//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], word[50];
    int i = 0, j = 0, k;

    printf("Enter a sentence: ");
    gets(sentence);

    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0';
            for (k = j - 1; k >= 0; k--)
                printf("%c", word[k]);
            printf(" ");
            j = 0;
        }
        i++;
    }

    word[j] = '\0';
    for (k = j - 1; k >= 0; k--)
        printf("%c", word[k]);

    return 0;
}

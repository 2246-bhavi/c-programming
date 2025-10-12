//Find the longest word in a sentence.


#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    gets(sentence);

    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0';
            len = strlen(word);
            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }

    word[j] = '\0';
    len = strlen(word);
    if (len > maxLen) {
        maxLen = len;
        strcpy(longest, word);
    }

    printf("Longest word: %s", longest);
    printf("\nLength: %d", maxLen);

    return 0;
}

//Check if two strings are anagrams of each other.


#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0};
    int i;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Check if both strings have same length
    if (strlen(str1) != strlen(str2)) {
        printf("Not Anagrams.");
        return 0;
    }

    // Count frequency of each character in both strings
    for (i = 0; str1[i] != '\0'; i++) {
        freq1[(int)str1[i]]++;
        freq2[(int)str2[i]]++;
    }

    // Compare frequencies
    for (i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not Anagrams.");
            return 0;
        }
    }

    printf("Strings are Anagrams!");
    return 0;
}

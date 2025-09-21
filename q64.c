#include <stdio.h>

int main() {
    int number, digit;
    int freq[10] = {0};
    int i, maxCount = 0, mostFrequent = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        digit = number % 10;
        freq[digit]++;
        number = number / 10;
    }

    for (i = 0; i < 10; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            mostFrequent = i;
        }
    }

    printf("The digit that appears the most is: %d\n", mostFrequent);

    return 0;
}

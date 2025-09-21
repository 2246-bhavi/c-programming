/*Write a program to print the following pattern:
    5
   45
  345
 2345
12345*/

#include <stdio.h>

int main() {
    int i, j, space;

    int n = 5; // Total number of rows

    for (i = n; i >= 1; i--) {
        // Print leading spaces
        for (space = 1; space < i; space++) {
            printf(" ");
        }

        // Print numbers from i to 5
        for (j = i; j <= n; j++) {
            printf("%d", j);
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}

/*Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main() {
    int i, n = 5;


    for (i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    * */

    #include <stdio.h>

int main() {
    int i, j, space;

    
    int n = 5;

    for (i = 0; i < n; i++) {
        
        for (space = 0; space < i; space++) {
            printf(" ");
        }

        for (j = 0; j < n - i; j++) {
            printf("*");
        }
    
        printf("\n");
    }

    return 0;
}


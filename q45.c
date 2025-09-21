//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        int numerator = 2 * i;
        int denominator = 4 * (i - 1) + 3;
        float term = (float)numerator / denominator;
        sum += term;
        printf("Term %d: %d/%d = %.5f\n", i, numerator, denominator, term);
    }
    printf("\nSum of the series up to %d terms is: %.5f\n", n, sum);

    return 0;
}

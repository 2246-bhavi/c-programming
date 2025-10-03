//Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    
    int matrix[m][n];
    
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Diagonal Traversal of the matrix:\n");
    for(int d = 0; d < m + n - 1; d++) {
        int row = (d < n) ? 0 : d - n + 1;
        int col = (d < n) ? d : n - 1;
        
        while(row < m && col >= 0) {
            printf("%d ", matrix[row][col]);
            row++;
            col--;
        }
        printf("\n");
    }
    
    return 0;
}

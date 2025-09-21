//Merge two arrays.

#include <stdio.h>

int main() {
    int arr1[50], arr2[50], merged[100];
    int size1, size2, i, j;

    
    printf("Enter size of first array: ");
    scanf("%d", &size1);

    printf("Enter %d elements for first array:\n", size1);
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    
    printf("Enter size of second array: ");
    scanf("%d", &size2);

    printf("Enter %d elements for second array:\n", size2);
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    
    for (i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    
    for (j = 0; j < size2; j++) {
        merged[i] = arr2[j];
        i++;
    }

    
    printf("Merged array:\n");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }

    printf("\n");
    return 0;
}

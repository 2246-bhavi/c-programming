//Delete an element from an array.

#include <stdio.h>

int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int n = 5;
    int key, i, pos = -1;

    printf("Enter the element to delete: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Element not found!\n");
    } else {
        for (i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("Array after deletion: ");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

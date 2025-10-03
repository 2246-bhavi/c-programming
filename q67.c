//Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos, key, i;

    printf("Enter the element to insert: ");
    scanf("%d", &key);
    printf("Enter the position (0 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    for (i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = key;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}



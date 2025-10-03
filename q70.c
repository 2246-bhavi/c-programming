//Rotate an array to#include <stdio.h>

int main() {
    int arr[20] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;
    int temp[20];
    int i;

    k = k % n;

    for (i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("Array after rotation: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

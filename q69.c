//Find the second largest element in an array.

#include <stdio.h>

int main() {
    int arr[] = {10, 25, 8, 30, 15, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int largest = arr[n - 1];
    int second = -1;

    for (i = n - 2; i >= 0; i--) {
        if (arr[i] < largest) {
            second = arr[i];
            break;
        }
    }

    if (second == -1)
        printf("No second largest element (all elements equal).\n");
    else
        printf("Second largest element = %d\n", second);

    return 0;
}

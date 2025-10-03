//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int arr[20] = {2, 4, 7, 10, 15, 20};  
    int n = 6;  
    int key, i;

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = key;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main() {
    int n, k;
    int arr[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    int maxSum = 0;
    for(int i = 0; i < k; i++) {
        maxSum += arr[i];
    }

    int currentSum = maxSum;
    for(int i = k; i < n; i++) {
        currentSum = currentSum - arr[i - k] + arr[i];
        if(currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("Maximum sum of subarray of size %d is: %d\n", k, maxSum);

    return 0;
}

//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main()
{
    int n, i, sum = 0, total, missing;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements (numbers from 0 to %d):\n", n, n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    total = n * (n + 1) / 2;

    missing = total - sum;

    printf("Missing number is: %d", missing);

    return 0;
}

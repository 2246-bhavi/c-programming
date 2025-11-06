//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int visited[n];

    for(i = 0; i < n; i++)
        visited[i] = 0;

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if(visited[arr[i]] == 1)
        {
            printf("Repeated element is: %d", arr[i]);
            break;
        }
        else
        {
            visited[arr[i]] = 1;
        }
    }

    return 0;
}

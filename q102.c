//Write// a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

#include <stdio.h>

int main() {
    int n, x;
    
    // Input array size
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input sorted array elements
    printf("Enter %d sorted elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    printf("Enter the value of x: ");
    scanf("%d", &x);
    
    int ans = -1; 
    
    
    int low = 0, high = n - 1;
    
    while(low <= high) {
        int mid = (low + high) / 2;
        
        if(arr[mid] >= x) {
            ans = mid;     
            high = mid - 1; 
        } else {
            low = mid + 1;
        }
    }
    
    
    if(ans == -1)
        printf("-1\n");
    else
        printf("Ceil of %d is %d at index %d\n", x, arr[ans], ans);
    
    return 0;
}

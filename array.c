#include <stdio.h>
#include <stdlib.h> // Required for qsort

// Comparison function for qsort (for ascending order)
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int arr[] = {12, 34, 78, 98, 45, 76, 43, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the value of K: ");
    scanf("%d", &k);

    // Check if K is within valid bounds
    if (k <= 0 || k > n) {
        printf("Invalid value of K. K must be between 1 and %d.\n", n);
        return 1;
    }

    // Sort the array in ascending order
    qsort(arr, n, sizeof(int), compare);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Kth smallest element is at index k-1 (0-indexed)
    printf("The %dth smallest element is: %d\n", k, arr[k - 1]);

    // Kth largest element is at index n-k (0-indexed)
    printf("The %dth largest element is: %d\n", k, arr[n - k]);

    return 0;
}
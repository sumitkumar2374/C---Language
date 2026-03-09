#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Input array size
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer for size.\n");
        return 1;
    }

    int arr[n];

    // Input array elements
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    int duplicateCount = 0;

    // Count duplicates
    for (int i = 0; i < n; i++) {
        int count = 0;
        if (arr[i] != -999999) { // Sentinel value to mark visited elements
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = -999999; // Mark as visited
                }
            }
            if (count > 0) {
                duplicateCount++;
            }
        }
    }

    printf("Total number of duplicate elements: %d\n", duplicateCount);

    return 0;
}

#include <stdio.h>

// Function to find the first peak element
int findFirstPeak(int arr[], int n) {
    if (n == 1) {
        return arr[0]; // If there's only one element, it's a peak
    }
    
    // Check if the first element is a peak
    if (arr[0] > arr[1]) {
        return arr[0];
    }

    // Check for peak elements in the middle of the array
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i]; // Return the first peak element found
        }
    }

    // Check if the last element is a peak
    if (arr[n - 1] > arr[n - 2]) {
        return arr[n - 1];
    }

    return -1; // No peak element found
}

int main() {
    int n;

    // Read the number of elements
    scanf("%d", &n);

    int arr[n];

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the first peak element
    printf("%d\n", findFirstPeak(arr, n));

    return 0;
}

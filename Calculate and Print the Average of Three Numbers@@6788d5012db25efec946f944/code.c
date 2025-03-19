#include <stdio.h>

int main() {
    int a, b, c;
    float average;

    // Input: Three space-separated integers
    scanf("%d %d %d", &a, &b, &c);

    // Calculate the average
    average = (a + b + c) / 3.0;

    // Output: Average of the three integers
    printf("Average %.2f\n", average);

    return 0;
}

#include <stdio.h>

int main() {
    float radius, area;

    // Input: Radius of the circle
    scanf("%f", &radius);

    // Calculate the area of the circle
    area = 3.14 * radius * radius;

    // Output: Area of the circle
    printf("Area: %.2f\n", area);

    return 0;
}

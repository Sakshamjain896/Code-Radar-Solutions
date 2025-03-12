#include <stdio.h>

int main() {
    double num;

    printf("Enter a double-precision floating-point number: ");
    scanf("%lf", &num);

    printf("You entered: %.4lf\n", num);

    return 0;
}

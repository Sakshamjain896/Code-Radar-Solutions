#include <stdio.h>

int main() {
    float num1, num2, product;

    // Take two floating-point numbers as input
    printf("Enter the first number: ");
    // Ensure the user input is correctly captured
    if (scanf("%f", &num1) != 1) {
        printf("Invalid input for the first number.\n");
        return 1;
    }

    printf("Enter the second number: ");
    // Ensure the user input is correctly captured
    if (scanf("%f", &num2) != 1) {
        printf("Invalid input for the second number.\n");
        return 1;
    }

    // Calculate the product of the two numbers
    product = num1 * num2;

    // Print the product using printf
    printf("The product of %.2f and %.2f is %.2f\n", num1, num2, product);

    return 0;
}

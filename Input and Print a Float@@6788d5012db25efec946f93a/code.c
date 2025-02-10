#include<stdio.h>

int main() {
    float number;

    printf("Enter a floating number: ");
    scanf("%f", &number);
    printf("You entered: %0.2f\n", number);
    return 0;
}
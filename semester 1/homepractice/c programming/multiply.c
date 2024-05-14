#include <stdio.h>

int main() {
    float number1, number2, product;

    printf("Enter two numbers: ");
    scanf("%f %f", &number1, &number2);

    // Calculating product
    product = number1 * number2;

    printf("Product = %f", product);
    return 0;
}
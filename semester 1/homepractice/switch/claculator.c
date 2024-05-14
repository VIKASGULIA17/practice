#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Choose an operation to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Division\n");
    printf("4. Average\n");
    printf("5. Percentage\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = num1 / num2;
            printf("Result: %.2f\n", result);
            break;
        case 4:
            result = (num1 + num2) / 2;
            printf("Result: %.2f\n", result);
            break;
        case 5:
            result = (num1 / num2) * 100;
            printf("Result: %.2f%%\n", result);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
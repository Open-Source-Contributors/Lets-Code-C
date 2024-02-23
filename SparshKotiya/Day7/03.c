#include <stdio.h>
#include <math.h>

int main() {
    int choice, num1, num2;
    double result;

    printf("Welcome to the Ayesha's Advanced Calculator!\n");

    // asking to the user for operater
        printf("\nChoose an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulo\n");
        printf("6. Floor Division\n");
        printf("7. Square Root\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = num1 + num2;
                printf("Sum = %.2lf\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = num1 - num2;
                printf("Difference = %.2lf\n", result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = num1 * num2;
                printf("Product = %.2lf\n", result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                if (num2 == 0) {
                    printf("Error: Division by zero!\n");
                } else {
                    result = (double)num1 / num2;
                    printf("Quotient = %.2lf\n", result);
                }
                break;
            case 5:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                if (num2 == 0) {
                    printf("Error: Modulo by zero!\n");
                } else {
                    result = num1 % num2;
                    printf("Modulo = %.2lf\n", result);
                }
                break;
            case 6:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                if (num2 == 0) {
                    printf("Error: Floor division by zero!\n");
                } else {
                    result = (double)num1 / num2;
                    result = floor(result);
                    printf("Floor Division = %.0lf\n", result);
                }
                break;
            case 7:
                printf("Enter a number: ");
                scanf("%d", &num1);
                if (num1 < 0) {
                    printf("Error: Square root of negative number!\n");
                } else {
                    result = sqrt(num1);
                    printf("Square Root = %.2lf\n", result);
                }
                break;
            case 8:
                printf("Exiting calculator...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    

    return 0;
}

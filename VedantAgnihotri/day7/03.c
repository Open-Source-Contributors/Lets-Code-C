#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("Enter your choice (1-7):\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo\n6. Floor Division\n7. Square root\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if(num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        case 5:
            printf("Enter two integers: ");
            int n1, n2;
            scanf("%d %d", &n1, &n2);
            if(n2 != 0) {
                int modulo = n1 % n2;
                printf("Result: %d\n", modulo);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        case 6:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if(num2 != 0) {
                result = floor(num1 / num2);
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        case 7:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if(num1 >= 0) {
                result = sqrt(num1);
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error! Square root of negative number is not defined.\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("Advanced Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulo\n");
    printf("6. Floor Division\n");
    printf("7. Square root\n");


    printf("Enter your choice (1-7): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 + num2;
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 - num2;
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 * num2;
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1; 
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
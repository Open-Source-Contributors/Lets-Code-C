#include <stdio.h>
#include <math.h>

int main() {
    int choice;

    printf("Enter\n1: Addition\n2: Subtraction\n3: Multiplication\n4: Division\n5: Modulo\n6: Floor Division\n7: Find square root of number\n");
    scanf("%d",&choice);

    switch (choice) {
        case 1: {
            int num1;
            int num2;

            printf("Enter 1st number: ");
            scanf("%d",&num1);
            printf("Enter 2nd number: ");
            scanf("%d",&num2);

            int sum = num1 + num2;
            printf("Addition: %d",sum);

            break;
        }

        case 2: {
            int num1;
            int num2;

            printf("Enter 1st number: ");
            scanf("%d",&num1);
            printf("Enter 2nd number: ");
            scanf("%d",&num2);

            int sub = num1 + num2;
            printf("Subtraction: %d",sub);

            break;
        }

        case 3: {
            int num1;
            int num2;

            printf("Enter 1st number: ");
            scanf("%d",&num1);
            printf("Enter 2nd number: ");
            scanf("%d",&num2);

            int multi =  num1 * num2;
            printf("Multiplication: %d",multi);

            break;
        }

        case 4: {
            int num1;
            int num2;

            printf("Enter 1st number: ");
            scanf("%d",&num1);
            printf("Enter 2nd number: ");
            scanf("%d",&num2);

            float div = (float) num1 / num2;
            printf("Division: %f",div);

            break;
        }

        case 5: {
            int num1;
            int num2;

            printf("Enter 1st number: ");
            scanf("%d",&num1);
            printf("Enter 2nd number: ");
            scanf("%d",&num2);

            int modulo = num1 % num2;
            printf("Modulo: %d",modulo);

            break;
        }

        case 6: {
            int num1;
            int num2;

            printf("Enter 1st number: ");
            scanf("%d",&num1);
            printf("Enter 2nd number: ");
            scanf("%d",&num2);

            int floor = num1 / num2;
            printf("Floor Division: %d",floor);

            break;
        }

        case 7: {
            double num; //double for higher precision

            printf("Enter 1st number: ");
            scanf("%lf",&num);
            
            if (num < 0) {
                printf("We can't calculate squareroot of negative number.");
            }
            else {
                double square_root = sqrt(num);
                printf("Square root: %lf",square_root);
            }

            break;
        }

        default:
            printf("Invalid input.");
    }

    return 0;

}

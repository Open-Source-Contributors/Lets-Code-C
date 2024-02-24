#include <stdio.h>

int main() {
    double number, sum = 0;

    do {
        printf("Enter a number (0 to exit): ");
        scanf("%lf", &number);

        sum += number;
    } while (number != 0);

    printf("Sum of all entered numbers: %.2lf\n", sum);

    return 0;
}

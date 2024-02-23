#include <stdio.h>

int perfect(int num);

int main() {
    int num;
    printf("Enter positive integer number: ");
    scanf("%d",&num);

    if (num < 1) {
        printf("Incorrect number entered.");
    }
    else {
        perfect(num);
    }

    return 0;
}

int perfect(int num) {
    int sum_divisors = 0;
    int i;
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum_divisors += i;
        }
    }

    if (num == sum_divisors) {
        printf("%d is perfect number.",num);
    }
    else {
        printf("%d is not perfect number.",num);
    }

    return 0;
}

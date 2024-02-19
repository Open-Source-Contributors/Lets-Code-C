#include <stdio.h>

// Function to calculate Fibonacci sequence
void generateFibonacci(int n) {
    int first = 0, second = 1, next, i;

    printf("Fibonacci Series up to %d terms:\n", n);

    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
}

int main() {
    int num;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the entered number is positive
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    generateFibonacci(num);

    return 0;
}

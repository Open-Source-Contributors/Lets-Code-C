#include <stdio.h>

// Function to calculate factorial recursively
unsigned long long factorial(int n)
 {
    if (n == 0 || n == 1)
     {
        return 1;
    } 
    else
     {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // Prompt user for input
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Validation input
    if (num < 0) {
        printf(" Please enter a non-negative integer.\n");
    } else {
        // Calculate factorial
        unsigned long long fact = factorial(num);
        
        // Display result
        printf("Factorial of %d is: %llu\n", num, fact);
    }

    return 0;
}
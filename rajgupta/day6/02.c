#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Input validation: Prompt user until valid non-zero positive integers are entered
    do {
        printf("Enter the first non-zero positive integer: ");
        scanf("%d", &num1);
    } while(num1 <= 0);
    
    do {
        printf("Enter the second non-zero positive integer: ");
        scanf("%d", &num2);
    } while(num2 <= 0);
    
    // Swapping using pointers
    swap(&num1, &num2);
    
    // Display swapped numbers
    printf("Original Numbers: %d and %d\n", num2, num1);
    printf("Swapped Numbers: %d and %d\n", num1, num2);

    return 0;
}
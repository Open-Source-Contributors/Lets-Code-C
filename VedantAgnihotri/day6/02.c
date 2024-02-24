#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Input Validation
    do {
        printf("Enter the first non-zero positive integer: ");
        scanf("%d", &num1);
    } while (num1 <= 0);
    
    
    if (num1 == 0)

    {
        printf("a numeric value entered is zero , please enter a non zero value\n");
    
    }
    

    do {
        printf("Enter the second non-zero positive integer: ");
        scanf("%d", &num2);
    } while (num2 <= 0);


    if (num2 == 0)

    {
        printf("a numeric value entered is zero , please enter a non zero value\n");
    
    }

    // Swapping with Pointers
    swap(&num1, &num2);

    // Display Swapped Numbers
    printf("Original Numbers: %d and %d\n", num2, num1);
    printf("Swapped Numbers: %d and %d\n", num1, num2);

    return 0;
}

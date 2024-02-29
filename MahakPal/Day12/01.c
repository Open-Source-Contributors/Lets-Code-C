#include <stdio.h>

int main() {
    int i, j, n;
    
    printf("Enter an odd number for arrow frame size: ");
    scanf("%d", &n);
    
    if (n <= 0 || n % 2 == 0) {
        printf("Please enter a non-zero odd integer.\n");
        return 1; 
    }

    for (i = 1; i <= n / 2; i++) {
        for (j = 1; j <= n / 2 - 1; j++) {
            if (j >= n / 2 - i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (i = 1; i <= n; i++) {
        printf("*");
    }
    printf("\n");

    
    for (i = n / 2; i >= 1; i--) {
        for (j = 1; j <= n / 2 - 1; j++) {
            if (j >= n / 2 - i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
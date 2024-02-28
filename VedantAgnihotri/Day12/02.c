#include <stdio.h>

void print_pattern(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for(int i=n; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter a positive integer less than 6: ");
    scanf("%d", &n);

    while(n <= 0 || n >= 6) {
        printf("Invalid input. Please enter a positive integer less than 6: ");
        scanf("%d", &n);
    }

    printPattern(n);
    printPattern(n);

    return 0;
}

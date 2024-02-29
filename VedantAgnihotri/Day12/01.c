#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter an odd number: ");
    scanf("%d", &n);

    if(n <= 0 || n%2 == 0) {
        printf("Wrong input! Please enter a non-zero positive odd number.\n");
        return 1;
    }

    // Print the upper part of the arrow
    for(i=0; i<n/2+1; i++) {
        for(j=0; j<n; j++) {
            if(j >= n/2-i && j <= n/2+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    // Print the lower part of the arrow
    for(i=0; i<n/2; i++) {
        for(j=0; j<n; j++) {
            if(j == n/2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
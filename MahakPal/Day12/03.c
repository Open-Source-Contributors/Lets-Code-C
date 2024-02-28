#include <stdio.h>

int main() {
    int i, j, n;
    
    printf("Enter an odd positive integer: ");
    scanf("%d", &n);
    
    if (n % 2 != 1 || n < 1 || n > 6) {
        printf("Please enter an odd positive integer between 1 and 6.\n");
        return 1; 
    }
    // for upper part
for (int i = n / 2; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (j >= n/2 - i && j <= n / 2 + i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

// for middle part
for(i=0; i<n/2+1; i++) {
        for(j=0; j<n; j++) {
            if(j >= n/2-i && j <= n/2+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    // for last part
    for (int i = n / 2; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (j >= n/2 - i && j <= n / 2 + i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }


return 0;
}
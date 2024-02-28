#include <stdio.h>

int main() {
    int i, j, n;
    
    printf("Enter a positive integer ");
    scanf("%d", &n);
    
    if (n <= 0 || n >= 6) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }
  // first part
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
   // for middle part
    for(i = 1; i <= 3; i++) {
        for(j = 3; j >= i; j--) {
            printf("*");
        }
        printf("\n");
    }
  // for last part
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

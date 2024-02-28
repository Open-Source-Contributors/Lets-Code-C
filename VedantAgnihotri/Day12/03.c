#include <stdio.h>

int main() {
    int n;
    printf("Enter an odd positive integer between 1 and 6: ");
    scanf("%d", &n);

    while(n < 1 || n > 6 || n % 2 == 0) {
        printf("Invalid input. Please enter an odd positive integer between 1 and 6: ");
        scanf("%d", &n);
    }

    for(int i = 0; i < n; i++) {
        if(i < n / 2) {
            for(int j = 0; j < n; j++) {
                printf("*");
            }
            printf("\n");
        } else if(i == n / 2) {
            printf("*\n");
        } else {
            for(int j = 0; j < n; j++) {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}

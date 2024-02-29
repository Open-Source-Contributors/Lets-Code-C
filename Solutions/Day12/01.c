
#include <stdio.h>

int main() {
    int num;
    printf("Enter a non-zero odd positive integer: ");
    scanf("%d",&num);

    // check for non-zero odd positive integer
    if (num < 0 || num % 2 == 0) {
        printf("Invalid input.\n");
        return 0;
    }
    for (int i = 1; i <= num; i++) {
        if (i % 2 != 0) {
            int spaces = (num - i) / 2;
            int stars = i;
            for (int j = 0; j < spaces; j++) {
                printf(" ");
            }
            for (int k = 0; k < stars; k++) {
                printf("*");
            }
            printf("\n");
        }
    }

    int dots = num / 2;
    int spaces = num /2;
    for (int m = 0; m < dots; m++) {
        for (int n = 0; n < spaces; n++) {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}

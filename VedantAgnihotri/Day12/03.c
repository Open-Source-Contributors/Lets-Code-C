#include <stdio.h>

int main() {
    int n;
    printf("Enter an odd positive integer between 1 and 6: ");
    scanf("%d", &n);

    while(n < 1 || n > 6 || n % 2 == 0) {
        printf("Invalid input. Please enter an odd positive integer between 1 and 6: ");
        scanf("%d", &n);
    }

    if(n % 3 == 0) {
        printf("***\n");
        printf(" *\n");
        printf(" *\n");
        printf("***\n");
        printf("***\n");
         printf(" *\n");
    }
     if(n % 5 == 0) {
        printf("*****\n");
        printf(" *\n");
        printf(" *\n");
        printf("*****\n");
        printf("*****\n");
         printf(" *\n");
    }



    return 0;
}

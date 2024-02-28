#include <stdio.h>

int main() {
    int rows;
    printf("Enter the no of rows (non-zero positive integer less than 6): ");
    scanf("%d",&rows);

    // check input is non-zero positive integer less than 6
    if (rows > 6 || rows < 1) {
        printf("Invalid input!");
        return 0;
    }

    // print pattern
    for (int i = 1; i <= rows; i++) {
        if (i % 2 != 0) {
             // increasing
                for (int j = 1; j <= rows; j++) {
                    for (int k = 1; k <= j; k++) {
                        printf("*");
                    }
                    printf("\n");
                }
        } else {
            // decreasing
                for (int j = rows; j > 0; j--) {
                    for (int k = j; k > 0; k--) {
                        printf("*");
                    }
                    printf("\n");
                }
        }
    }
    return 0;
}

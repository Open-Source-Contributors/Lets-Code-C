#include <stdio.h>

int increasing(int rows) {
    for (int j = 1; j <= rows; j++) {
        if (j % 2 != 0) {
            int spaces = (rows - j)/2;
            int stars = j;
            for (int k = 0; k < spaces; k++) {
                printf(" ");
            }
            for (int l = 0; l < stars; l++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}


int decreasing(int rows) {
    for (int m = rows; m > 0; m--) {
        if (m % 2 != 0) {
            int spaces = (rows - m)/2;
            int stars = m;
            for (int n = 0; n < spaces; n++) {
                printf(" ");
            }
            for (int o = 0; o < stars; o++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}

int main() {
    int rows;
    printf("Enter the no of rows(odd positive integer between 1 and 6, both inclusive): ");
    scanf("%d",&rows);

    // check if no of rows is odd and between 1 and 6
    if (rows % 2 == 0 || rows < 1 || rows > 6) {
        printf("Invalid input!");
        return 0;
    }  

    for (int i = 1; i <= rows; i++) {
        if (i % 2 != 0) {
            // decreasing
            decreasing(rows);
        } else {
            // increasing 
            increasing(rows);
        }
    }
    return 0;
}

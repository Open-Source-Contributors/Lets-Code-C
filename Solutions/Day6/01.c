#include <stdio.h>

int main() {
    float num;
    float sum = 0;

    do {
        printf("Enter the number: ");
        scanf("%f",&num);
        sum += num;
    } while (num != 0);

    printf("Final sum is %.2f.",sum);

    return 0;
}
 

#include <stdio.h>


int main() {
    int num1;
    do {
        printf("Enter the 1st no: ");
        scanf("%d",&num1);
    } while (num1 <= 0);

    int num2;
    do {
        printf("Enter the 1st no: ");
        scanf("%d",&num2);
    } while (num2 <= 0);

    printf("Two numbers before swapping are %d and %d.\n",num1,num2);

    int *ptr;
    *ptr = num1;
    num1 = num2;
    num2 = *ptr;

    printf("Two numbers after swapping are %d and %d.\n",num1,num2);

    return 0;   
}

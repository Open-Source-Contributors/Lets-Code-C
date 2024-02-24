#include <stdio.h>

int main(){
    int number, sum = 0;
    do{
    printf("Enter a number(0 to stop):");
    scanf("%d", &number);
    sum += number;
    } while (number != 0);

    if (number !=0);{
        printf("%d is sum of all entered number\n", sum);
    }

    return 0;
}
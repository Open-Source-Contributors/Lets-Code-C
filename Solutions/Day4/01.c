#include <stdio.h>

int factorial(int num);

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    if (num < 1) {
        printf("Incorrect input."); //if num is less than 1
    } else {
        int fact;
        fact = factorial(num);
        printf("Factorial of %d is %d.",num,fact);
    }

    return 0;
}

int factorial(int num) {
    int fact = 1;

    if (num <= 1) {
        fact *= 1; //when num becomes 1, it stops recursion
    } else {
        fact = num*factorial(num-1); //it goes like this: num*(num-1)*(num-2)*....2
    }

    return fact;
}

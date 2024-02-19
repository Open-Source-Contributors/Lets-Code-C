#include <stdio.h>

int fibonacci(int n);

int main() {
    int number, i;
    printf("Enter the term of Fibonacci series\n ");
    scanf("%d", &number);
    printf("%d fibonacci series\n", number);

    for (i = 0; i < number; i++) 
        printf("%d ", fibonacci(i));
    
    return 0;
}

int fibonacci(int n) {
    if (n<=1) 
        return n;
    else 
        return fibonacci(n - 1) + fibonacci(n - 2);
}

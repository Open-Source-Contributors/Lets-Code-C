#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num < 0){
        printf("Error:Factorial of negative number is not define\n");
        }else{
    printf("Factorial of %d is %d\n", num, factorial(num));
        }
    return 0;
}


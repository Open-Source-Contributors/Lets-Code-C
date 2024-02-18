#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)// it is not a prime number.
     {
        return 0;
    }
    
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0)// it is  not a prime number.
         {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}

#include <stdio.h>

int main() {
    int num;
    printf("Enter a non-zero positive integer number: ");
    scanf("%d",&num);

    //check num is positive number
    if (num <= 0) 
    return 1; //stop program execution
    else if (num == 2) //2 is only even prime number
    printf("%d is prime number.",num);
    else {
        int i = 2;
        int check = 0;
        for (i=2; i<num; i++) {
            if (num % i == 0) {
                check = 1;
                break;
            }
        }

        if (check == 0)
        printf("%d is prime number.",num);
        else
        printf("%d is not prime number.",num);
    }

    return 0;
}

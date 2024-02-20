#include <stdio.h>

int fibonacci(int num);

int main() {
    int num;
    
    printf("Enter the number for Fibonacci sequence: ");
    scanf("%d",&num);

    if (num < 0)
    printf("Incorrect Number.");
    else 
    fibonacci(num);

    return 0;
}

int fibonacci(int num) {
    int i = 0;
    int j = 1;
    printf("%d %d ",i,j);
    int k;
    int sum;
    int temp;
    for (k=2; k<num; k++) {
        sum = i + j;
        printf("%d ",sum);
        temp = j;
        i = j;
        j = sum;
    }
    return 0;
}

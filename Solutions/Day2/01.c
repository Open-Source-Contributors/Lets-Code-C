#include <stdio.h>

int main() {
    int num;
    printf("Enter a numeber: ");
    scanf("%d",&num);

    //checking if no is odd or even
    if (num % 2 == 0) //num is even if it divisible by 2
    printf("%d is even.",num);
    else 
    printf("%d is odd.",num);
    
    return 0;
}

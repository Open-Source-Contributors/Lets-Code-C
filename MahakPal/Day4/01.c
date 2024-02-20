#include <stdio.h>


int factorial(int n){

if (n == 0){
   return 1;
   } else {
return n * (n - 1);
   }
}
int main()
{
    int number;
    printf("Enter any number\n");
    scanf("%d", &number);

if (number < 0) {
    printf("Enter non negative integer\n");
} else {
    printf("%d\n", factorial(number));
}
    return 0;
}

#include <stdio.h>


int factorial(int n){

if (n == 0){
   return 1;
   } else {
return n * (n-1);
   }
}
int main()
{
    int number;
    printf("Enter any number\n");
    scanf("%d", &number);

    printf("%d", number, factorial);
    return 0;
}

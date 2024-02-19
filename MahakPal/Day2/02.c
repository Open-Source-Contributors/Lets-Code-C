#include <stdio.h>
 // Function to determine whether the entered number is prime //
int main()
{

    //Input 5  ---->prime number //

    int number,i, count=0;

    printf("Enter any number\n");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }


    if (count == 2)
    {
        printf("%d is a prime number\n", number);
    }
    else{
        printf("%d is not a prime number\n", number);
    }
      
    return 0;
}
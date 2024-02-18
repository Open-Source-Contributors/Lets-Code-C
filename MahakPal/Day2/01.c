#include <stdio.h>
int main()
{
    int number;
    // Promote the user to entre an integer //
    printf("\n enter any number");

    // Read the entered integer from the user //
    scanf("%d", &number);

    
    if (number % 2 == 0)
    {
    printf("the number is even\n", number);
    }

    else
    {
    printf("the number is odd\n", number);
    }

    return 0;

}
#include <stdio.h>

// Function to determine whether the entered year is a leap year //
int main() 
{
    // Prompt the user to enter a year //
    int year;

    printf("Enter a Year\n ");
    scanf("%d", & year);

    if (year % 400 == 0)
    {
        printf("this is a leap year\n");
    }
    if ((year % 4) ==0)
    {
        printf("this is a leap year\n");
    }

     // Answer: 2020 is a leap year //
    else
    {
        printf("this is not a leap year\n");
    }
     // Answer: 1995 is not a leap year //
    return 0;

}


#include <stdio.h>

int main(void)
{
    int i, j, k, n;

    do
  {
    printf("enter the size of arrow\n");
    scanf("%d",&n);
  }
  while (n<=0 && n%2!=0);  // only odd number can pass

    for (i = 1; i <= n; i++)
    {
        // Print spaces for indentation
        for (k = 0; k < n - i; k++)
        {
            printf(" ");
        }

        // Print '*' characters for the current row
        for (j = 0; j < i; j++)
        {
            if (i % 2 != 0) // Check if i is odd
            {
                printf("*");
            }
        }

        // Move to the next line for the next row
        printf("\n");
    }

    // Additional lines to print the last two lines of the pattern
    for (i = 0; i < 2; i++)
    {
        // Print spaces for indentation
        for (k = 0; k < n - 1; k++)
        {
            printf(" ");
        }

        printf("*\n");
    }
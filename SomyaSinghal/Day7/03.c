#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Select operator(1. Addition, 2- Subtraction, 3- Multiplication, 4- Division, 5- Modulo, 6- Floor Division, 7- Square root): ");
    scanf("%d", &n);

    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (n != 7)
    {
        printf("Enter another number: ");
        scanf("%d", &y);
    }

    if (n == 1)
    {
        int add;
        add = x + y;
        printf("Addition: %d", add);
    }

    else if (n == 2)
    {
        int subtract;
        subtract= x - y;
        printf("Subtraction: %d", subtract);
    }

    else if (n == 3)
    {
        int multiply;
        multiply = x * y;
        printf("Multiplication: %d", multiply);
    }

    else if (n == 4)
    {
        if(y != 0)
        {
            float div;
            div = (float) x / y;
            printf("Division: %f", div);
        }
        else
        printf("Enter a valid denominator");
    }

    else if (n == 5)
    {
        if(y != 0)
        {
            int modulo;
            modulo = x % y;
            printf("Modulo: %d", modulo);
        }
        else
        printf("Enter a valid denominator");
    }

    else if (n == 6)
    {
        if(y != 0)
        {
            int floor_division;
            floor_division = x / y; 
            printf("Floor Division: %d", floor_division);
        }
        else
        printf("Enter a valid denominator");
    }

    else if (n == 7)
    {
        if (x >= 0)
        {
            float sq_root;
            sq_root = (float) sqrt(x);
            printf("Square root %d: %f", x, sq_root);
        }
        else
        printf("Enter a positive number");
    }

    else
    {
        printf("Enter a valid number");
    }
}
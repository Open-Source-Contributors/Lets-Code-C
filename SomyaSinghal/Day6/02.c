#include <stdio.h>
int main()
{
    int num1, num2, temp;
    int *ptr1, *ptr2;
    do
    {
        printf("Enter the first number: ");
        scanf("%d", &num1);

        printf("Enter the second number: ");
        scanf("%d", &num2);
    } while (num1 <= 0 || num2 <= 0);

    ptr1 = &num1;
    ptr2 = &num2;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("Number after swapping %d and %d", num1, num2);
    
    return 0;
}
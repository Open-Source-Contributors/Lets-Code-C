#include <stdio.h>
int year(int x)
{
    if (x % 400 == 0)
    return 1;
    else
    return 0;
}
int main()
{
    int x;
    printf("Enter the year: ");
    scanf("%d", &x);

    if (year(x))
    printf("It is a leap year");
    else
    printf("It is not a leap year");
}
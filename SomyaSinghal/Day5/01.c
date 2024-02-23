#include <stdio.h>
int perfect_number(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    if (n % i == 0)
    sum = sum + i;
    return sum == n;
}
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (perfect_number(n))
    {
        if(n > 0)
        printf("It is a perfect number");
        else
        printf("Enter valid number");
    }
    else
    printf("It is not a perfect number");

    return 0;
}
#include <stdio.h>
int prime(int n)
{
    if (n <= 1)
    return 0;

    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter a non zero positive integer: ");
    scanf("%d", &n);

    if (prime(n))
    printf("It is a prime number");
    else
    printf("It is not a prime number");
}
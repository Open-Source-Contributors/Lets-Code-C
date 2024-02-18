#include <stdio.h>
int main()
{
    int x;
    printf("Enter an interger: ");
    scanf("%d", &x);

    if (x % 2 == 0)
    printf("Number is Even");

    else
    printf("Number is odd");

    return 0;
}
#include <stdio.h>

int leap_year(int year);

int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);

    leap_year(year);

    return 0;
}

int leap_year(int year) {
    if (year % 4 == 0)
    printf("%d is leap year.",year);
    else
    printf("%d is not leap year.",year);

    return 0;
}

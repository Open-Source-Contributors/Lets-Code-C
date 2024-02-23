#include <stdio.h>

int perfect_number(int num)
{
    int i,sum = 0;{
    for(i = 1; i <= num/2; i++)
    
      if(num % i == 0)
        sum = sum + i;
    }
        return (sum == num);

}
int main()
{
    int num, sum;
    printf("Enter a positive integer:");
    scanf("%d", &num);

    if(perfect_number (num)){
        if(num > 0)
        printf("%d is a perfect number\n", num);
    }
        else
        printf("%d is not a perfect number\n", num);
    
    return 0;
}
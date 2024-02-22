#include<stdio.h>
int main()
{
float num;
float sum = 0;
while(1)
{printf("Enter the number:");
scanf("%f",&num);
sum += num;
if(num == 0)
{break;}
}
printf("the sum of the entered number %f\n",sum);
return 0;
}
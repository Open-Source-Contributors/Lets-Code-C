#include<stdio.h>
int main()
{
int x;
printf("enter the the year\n");
scanf("%d",&x);
if(x%4==0)
{
    printf("the year is leap year");
}
else
{
    printf("the year is not leap year");
}
return 0;
}




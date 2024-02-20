#include<stdio.h>
int fact(int);

int main()
{
int n,f;
do
  {  printf("enter the for factorial \n");
    scanf("%d",&n);
  } 
while(n<=0);

f=fact(n);
printf("factorial %d is = %d \n",n,f);
 
}

int fact(int n)
{
  if (n>1)
  return(n*fact(n-1));
  else 
  return 1;

}






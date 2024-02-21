#include<stdio.h>
int main ()
{
   int n,i,sum,remainder;

    // Take +ve input to the user
    
   do
  {  printf("enter the number \n");
    scanf("%d",&n);
  } 
    while(n<=0);

    // using loop to check proper divisor

    for(i=0; i<=n; i++)
    {
         remainder=n%i;

    //  adding proper divisor in "sum" variabel 

       if (remainder==0)
       {
           sum=sum+i;
       }
       
     }

    // using if else to match the proper number

     if(sum==n)
     {
      printf("%d is a perfect number ",n);
     }
     else
     ("%d is not a perfect number",n);

return 0;

}
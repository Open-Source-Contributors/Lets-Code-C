#include<stdio.h>
int main()
{
    int n,i,j ;

  do
  {
    printf("enter the size of arrow\n");
    scanf("%d",&n);
  }
  while ( n<=0  );  // talking input from the user

// printing upper triange

  for ( i=0; i<=n-1; i++)
  {
     for ( j=0; j<=i; j++)
        {
          printf("*");
        }
     printf("\n");
 }

// printing revers of upper triangle

for(i=n; i>=1; i--)
{
    for ( j=0; j<= i-1; j++)
        {
            printf("*");
        }
    printf("\n");
}

// printing upper tiangle

for ( i=0; i<=n-1; i++)
  {
     for ( j=0; j<=i; j++)
        {
          printf("*");
        }
     printf("\n");
 }
    return 0;
}

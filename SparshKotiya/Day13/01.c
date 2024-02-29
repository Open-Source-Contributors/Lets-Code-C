// C program to find and print the length of a given string without using the strlen function.
#include<stdio.h>
int main()
{  
   int l=0;
   char a[50];
   printf("enter a string : ");
   fgets(a, sizeof(a), stdin);
   while(a[l]!='\0')
        l++;

        printf("length = %d",l);

    return 0;
}
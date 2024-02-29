// C program that takes a string as input and prints its reverse.


#include<stdio.h>
#include<string.h>

int main ()
{ 
    char rev_str;

  char str[10];
   printf("enter you string ");
   fgets(str,sizeof(str),stdin);

    for (int i = strlen(str); i>='\0'; i--) {

        printf("%c",str[i]);

        
    }
    

    return 0;
}
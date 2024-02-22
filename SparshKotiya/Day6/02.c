// #include<stdio.h>
// int main ()
// {
 
//    int num1,num2,temp;
//    int *ptr1,*ptr2;
//   do
//   {  printf("enter the number \n");
//     scanf("%d",&num1);
//     printf("enter the number \n");
//     scanf("%d",&num2);
//   } 
//     while(num1 && num2<=0); 

//   temp=*ptr1;
//   *ptr1=*ptr2;
//   *ptr2=temp;

//      printf("number before swapping %d and %d", num1, num2);

//       printf("number after swapping %p and %p",ptr1,ptr2);

   

//     return 0;
// }



#include<stdio.h>

int main () {
    int num1, num2, temp;
    int *ptr1, *ptr2; // Pointers to integers

    // Input positive numbers from the user
    do {
        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);
    } while (num1 <= 0 || num2 <= 0); // Ensure both numbers are positive

    ptr1 = &num1; // Assign the address of num1 to ptr1
    ptr2 = &num2; // Assign the address of num2 to ptr2

    // Swapping using pointers
    temp = *ptr1; // Store the value of num1
    *ptr1 = *ptr2; // Assign the value of num2 to num1
    *ptr2 = temp; // Assign the stored value of num1 to num2

    // Print the swapped numbers
    printf("Numbers after swapping: %d and %d\n", num1, num2);

    return 0;
}

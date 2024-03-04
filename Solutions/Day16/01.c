#include <stdio.h>

int main() {
    // access array elements
    int data[] = {10, 20, 30, 40, 50};
    int *ptr_data = data;
    printf("Values at the third and fifth positions of the array are %d and %d.\n",*(ptr_data+2),*(ptr_data+4));

    // increment and decrement operations
    float prices[] = {5.5, 10.2, 15.8, 20.3};
    float *ptr_prices = &prices[1];
    ptr_prices++;
    printf("Values of next element is %.1f.\n",*ptr_prices);
    ptr_prices = &prices[1];
    ptr_prices--;
    printf("Values of previous element is %.1f.\n",*ptr_prices);

    // array navigation
    char letters[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    char *ptr_letters = letters;
    ptr_letters += 1;
    printf("Value at index 1 is %c.\n",*ptr_letters);
    ptr_letters += 2;
    printf("Value at input 4 is %c.\n",*ptr_letters);

    // comparision of pointers
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    if (ptr1 > ptr2) {
        printf("ptr1 comes before ptr2 in memory.\n");
    } else {
        printf("ptr2 comes before ptr1 in memory.\n");
    }

    return 0;
}

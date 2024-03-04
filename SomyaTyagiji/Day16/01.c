#include <stdio.h>

int main() {
    
    int data[5] = {10, 20, 30, 40, 50};
    int *ptr_data = data;
    printf("Third element: %d\n", *(ptr_data + 2));
    printf("Fifth element: %d\n", *(ptr_data + 4));

    float prices[4] = {5.5, 10.2, 15.8, 20.3};
    float *ptr_prices = &prices[1];
    printf("Next element: %.1f\n", *(++ptr_prices));
    printf("Previous element: %.1f\n", *(--ptr_prices));

    
    char letters[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
    char *ptr_letters = letters;
    printf("Second element: %c\n", *(ptr_letters + 1));
    printf("Fifth element: %c\n", *(ptr_letters + 4));

   
    int arr1[3] = {1, 2, 3};
    int arr2[3] = {4, 5, 6};
    int *ptr1 = arr1;
    int *ptr2 = arr2;

    if(ptr1 < ptr2) {
        printf("arr1 comes first in memory.\n");
    } else if(ptr1 > ptr2) {
        printf("arr2 comes first in memory.\n");
    } else {
        printf("arr1 and arr2 start at the same memory location.\n");
    }

    return 0;
}
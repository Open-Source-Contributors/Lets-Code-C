#include <stdio.h>

int main() {
    // Access Array Elements
    int data[] = {10, 20, 30, 40, 50};
    int *ptr_data = data;
    printf("Third element: %d\n", *(ptr_data + 2));
    printf("Fifth element: %d\n", *(ptr_data + 4));

    // Increment and Decrement Operations
    float prices[] = {5.5, 10.2, 15.8, 20.3};
    float *ptr_prices = &prices[1];
    printf("Next element: %.1f\n", *(++ptr_prices));
    printf("Previous element: %.1f\n", *(--ptr_prices));

    // Array Navigation
    char letters[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    char *ptr_letters = letters;
    printf("Element at index 1: %c\n", *(ptr_letters + 1));
    printf("Element at index 4: %c\n", *(ptr_letters + 4));

    // Comparison of Pointers
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    if (ptr1 < ptr2) {
        printf("arr1 comes before arr2 in memory\n");
    } else {
        printf("arr2 comes before arr1 in memory\n");
    }

    return 0;
}

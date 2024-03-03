## Pointer Arithmetic in C
Pointer arithmetic in C allows manipulation and navigation through memory by performing arithmetic operations on pointers. Understanding pointer arithmetic is crucial for efficient memory management and data manipulation. Here, we'll explore the basics of pointer arithmetic with examples.

### Basics of Pointer Arithmetic
In C, pointers are variables that store memory addresses. Pointer arithmetic involves adding or subtracting integers from pointers, where the integer represents the size of the data type being pointed to. This is particularly useful when dealing with arrays and dynamic memory allocation.

Example:
```c
#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers;

    // Accessing array elements using pointer arithmetic
    printf("Element at index 2: %d\n", *(ptr + 2)); // Output: 30

    // Moving to the next element
    ptr++;
    printf("Next element: %d\n", *ptr); // Output: 20

    // Moving to the previous element
    ptr--;
    printf("Previous element: %d\n", *ptr); // Output: 10

    return 0;
}
```
In this example, ptr initially points to the first element of the numbers array. By using pointer arithmetic, we can access elements at different positions in the array.

### Increment and Decrement Operators
Example:
```c
#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 20};
    int *p = arr;

    // Increment pointer
    p++; 
    printf("After increment: %d\n", *p); // Output: 10

    // Decrement pointer
    p--;
    printf("After decrement: %d\n", *p); // Output: 5

    return 0;
}
```
Here, the increment (++) and decrement (--) operators are used to move the pointer to the next and previous memory locations, respectively.

### Arithmetic with Array Pointers
Example:
```c
#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int *p = arr;

    // Adding an integer to a pointer
    p = p + 2;
    printf("Element at index 2: %d\n", *p); // Output: 6

    // Subtracting an integer from a pointer
    p = p - 1;
    printf("Element at index 1: %d\n", *p); // Output: 4

    return 0;
}
```
In this example, adding or subtracting an integer from a pointer allows navigation through the array.

### Comparison of Pointers
Pointer comparison involves checking the relative positions of pointers.

Example:
```c
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4};
    int *p1 = arr;
    int *p2 = &arr[2];

    // Comparing pointers
    if (p1 < p2) {
        printf("p1 comes before p2\n");
    } else {
        printf("p1 comes after p2\n");
    }

    return 0;
}
```
Here, the comparison (<) checks if p1 comes before p2 i

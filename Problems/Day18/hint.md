## Dynamic Memory Allocation in C

Dynamic memory allocation in C is a mechanism that allows a program to allocate memory at runtime. This is particularly useful when the size of data is not known at compile time or when you need to manage memory dynamically. Two key functions for dynamic memory allocation in C are malloc and free.

### malloc Function:
The malloc (memory allocation) function in C is used to dynamically allocate a specified number of bytes of memory. It takes the size in bytes as an argument and returns a pointer to the beginning of the allocated memory block.

### free Function:
The free function is used to deallocate memory that was previously allocated by malloc or a related function. It takes a pointer to the memory block to be freed as an argument.

### example
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size = 5;

    // Allocate memory for an integer array of size 5
    arr = (int*)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Use the allocated memory
    for (int i = 0; i < size; i++) {
        arr[i] = i * 2;
    }

    // Free the allocated memory when done
    free(arr);

    return 0;
}
```

- #include <stdio.h>: Includes the standard input/output library for functions like printf.
- #include <stdlib.h>: Includes the standard library for functions related to dynamic memory allocation, such as malloc and free.
- int *arr;: Declares a pointer arr capable of holding the address of an integer.
- int size = 5;: Specifies the size of the dynamic array to be allocated.
- arr = (int*)malloc(size * sizeof(int));: Dynamically allocates memory for an integer array of size 5. The cast (int*) is used to convert the void pointer returned by malloc into an integer pointer. The sizeof(int) ensures proper allocation based on the size of an integer.
- if (arr == NULL) { ... }: Checks if the memory allocation was successful. If arr is NULL, it indicates that memory allocation failed.
- for (int i = 0; i < size; i++) { arr[i] = i * 2; }: Uses the dynamically allocated memory to store values. This loop populates the array with values calculated based on the index.
- free(arr);: Releases the dynamically allocated memory using the free function. This step is crucial to prevent memory leaks.

## Pointers and Pointer Arithmetic
Pointers are variables that store memory addresses. In the context of dynamic memory allocation, pointers are used to manage and access dynamically allocated memory. Pointer arithmetic involves performing arithmetic operations on pointers.

## example

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size = 5;

    // Allocate memory for an integer array of size 5
    arr = (int*)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Use the allocated memory and perform pointer arithmetic
    for (int i = 0; i < size; i++) {
        arr[i] = i * 2;
    }

    // Print the array using pointer arithmetic
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }

    // Free the allocated memory when done
    free(arr);

    return 0;
}
```

- for (int i = 0; i < size; i++) { arr[i] = i * 2; }: Uses pointer arr to access and modify the elements of the dynamically allocated array. This is equivalent to array notation arr[i].
- for (int i = 0; i < size; i++) { printf("%d ", *(arr + i)); }: Demonstrates pointer arithmetic by printing the array. The expression *(arr + i) is equivalent to arr[i].
- free(arr);: Ensures proper memory management by freeing the dynamically allocated memory when it is no longer needed.

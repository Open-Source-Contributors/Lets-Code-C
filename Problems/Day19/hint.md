## Double Pointer
A double pointer is a pointer that holds the address of another pointer. It is also referred to as a pointer to a pointer. Understanding double pointers is crucial when dealing with situations where a function needs to modify the address of a pointer or allocate memory dynamically.

### Declaration and Initialization:
A double pointer is declared by using two asterisks (**). Here's the basic syntax:

```c
datatype **ptr;
```

datatype: The type of data the pointer is meant to point to.

### Example:

```c
#include <stdio.h>

int main() {
    int value = 42;
    int *ptr1 = &value;     // Pointer to an integer
    int **ptr2 = &ptr1;     // Double pointer to an integer pointer

    // Accessing the value using double pointer
    printf("Value using double pointer: %d\n", **ptr2);

    return 0;
}
```

- In this example, ptr1 is a pointer to an integer (int*), and ptr2 is a double pointer to an integer pointer (int**).
- ptr2 holds the address of ptr1, which, in turn, holds the address of the value.
- Using **ptr2 allows us to access the value indirectly through the double pointer.

### dynamic memory allocation for a 2D array using double pointer

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3, columns = 4;

    // Allocate memory for the 2D array
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(columns * sizeof(int));
    }

    // Initialize the values in the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i][j] = i + j;  // Example: Initialization with row + column
        }
    }

    // Display the matrix
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Deallocate the memory
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
```

1. Include Headers:

- #include <stdio.h> and #include <stdlib.h>: Include standard C libraries for input/output and memory allocation functions.

2. Define Dimensions:

- int rows = 3, columns = 4;: Define the dimensions of the 2D array (3 rows and 4 columns).

3. Allocate Memory:

- int **matrix = (int **)malloc(rows * sizeof(int *));: Allocate memory for the array of pointers to rows. The outer pointer (matrix) will store addresses of each row.
- for (int i = 0; i < rows; i++) { matrix[i] = (int *)malloc(columns * sizeof(int)); }: Inside a loop, allocate memory for each row. matrix[i] will store the address of the first element in each row.

4. Initialize Values:
- Use nested loops to traverse each element of the matrix and initialize its value. In this example, each element is initialized with the sum of its row and column indices.

5. Display Matrix:
- Use nested loops to traverse each element of the matrix and print its value. The output is formatted to display the matrix.

6. Deallocate Memory:
- Use loops to free the memory allocated for each row, and then free the memory allocated for the array of pointers (matrix). This step is crucial to prevent memory leaks.

7. Return 0:
- The main function ends by returning 0, indicating successful program execution.

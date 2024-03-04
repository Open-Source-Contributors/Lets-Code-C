# Multidimensional Arrays in C

In C programming, a multidimensional array is an array that holds other arrays. It can be thought of as an array of arrays. The most common type of multidimensional array is a two-dimensional array, although C supports arrays of more than two dimensions.

## Syntax

```c
data_type array_name[size1][size2];
```
data_type: The type of elements that the array will hold.
array_name: The name of the array.
size1 and size2: The dimensions of the array.

```c
#include <stdio.h>

int main() {
    // Declaration and initialization of a 2D array
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Accessing elements of the array
    printf("Element at matrix[1][2]: %d\n", matrix[1][2]);

    // Updating elements of the array
    matrix[0][1] = 99;

    // Printing the entire array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

## Declaration and Initialization:

int matrix[3][4]: Declares a 2D array named matrix with 3 rows and 4 columns.
The array is initialized with values provided in the curly braces.

## Accessing Elements:

Elements are accessed using indices. For example, matrix[1][2] refers to the element in the second row and third column.

## Updating Elements:

Elements can be updated similarly using indices. In the example, matrix[0][1] is updated to 99.

## Printing the Array:

A nested loop is used to iterate through each element of the array and print its value.

## Other Dimensions
While the example focuses on a 2D array, C supports arrays with more dimensions by extending the syntax. For instance, a 3D array:

```c
int cube[2][3][4];
```
Here, cube is a 3D array with dime

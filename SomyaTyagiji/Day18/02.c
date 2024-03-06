#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory for the list
int* allocate_list(int size) {
    int* list = (int*)malloc(size * sizeof(int));
    if (list == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    return list;
}

// Function to populate the list with user-inputted values
void populate_list(int* list, int size) {
    printf("Enter integer values for the list:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &list[i]);
    }
}

// Function to display the elements of the list
void display_list(int* list, int size) {
    printf("The elements of the list are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}

// Function to calculate the sum of all elements in the list
int calculate_sum(int* list, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += list[i];
    }
    return sum;
}

// Function to deallocate the memory allocated for the list
void deallocate_list(int* list) {
    free(list);
}

int main() {
    int size;
    printf("Enter the size of the list: ");
    scanf("%d", &size);

    int* list = allocate_list(size);
    populate_list(list, size);
    display_list(list, size);

    int sum = calculate_sum(list, size);
    printf("The sum of the elements is: %d\n", sum);

    deallocate_list(list);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int *allocate_list(int size) {
    int *list = (int *) malloc (size * sizeof(int));
    return list;
}

int populate_list(int size, int *list) {
    printf("Enter integer values for the list:\n");
    for (int i  = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", list + i);
    }
    return 0;
}

int display_list(int size, int *list) {
    printf("The elements of the list are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(list + i));
    }
    return 0;
}

int calculate_sum(int size, int *list) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(list + i);
    }
    return sum;
}

int deallocate_list(int *list) {
    free(list);
    return 0;
}

int main() {
    int size;
    printf("Enter the size of the list: ");
    scanf("%d",&size);

    // allocate memory
    int *list = allocate_list(size);
    if (list == NULL) {
        printf("Memory allocation failed.\n");
        return 0;
    }

    // populate list
    populate_list(size, list);
    printf("\n");

    // display list
    display_list(size, list);
    printf("\n");

    // calculate sum
    int sum = calculate_sum(size, list);
    printf("The sum of elements is: %d",sum);

    // deallocate list
    deallocate_list(list);

    return 0;
}

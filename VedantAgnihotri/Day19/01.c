#include <stdio.h>
#include <stdlib.h>

void allocate_memory(int ***arr) {
    *arr = (int **)malloc(6 * sizeof(int *));
    for (int i = 0; i < 6; i++) {
        (*arr)[i] = (int *)malloc(6 * sizeof(int));
    }
}

void initialize_roll_numbers(int **arr) {
    int roll_number = 1;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            arr[i][j] = roll_number++;
        }
    }
}

void display_roll_numbers(int **arr) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

double calculate_average(int **arr) {
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            sum += arr[i][j];
        }
    }
    return (double)sum / 36;
}

void deallocate_roll_numbers(int **arr) {
    for (int i = 0; i < 6; i++) {
        free(arr[i]);
    }
    free(arr);
}

int main() {
    int **roll_numbers;
    allocate_memory(&roll_numbers);
    initialize_roll_numbers(roll_numbers);
    printf("Roll Numbers:\n");
    display_roll_numbers(roll_numbers);
    printf("\nAverage Roll Number: %.1f\n", calculate_average(roll_numbers));
    deallocate_roll_numbers(roll_numbers);
    return 0;
}

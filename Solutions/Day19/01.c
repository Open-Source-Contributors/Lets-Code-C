#include <stdio.h>
#include <stdlib.h>

int **allocate_memory() {
    int **grid = (int **) malloc (6 * sizeof(int *));
    for (int i = 0; i < 6; i++) {
        grid[i] = (int *) malloc (6 * sizeof(int));
    }
    return grid;
}

int initialize_roll_numbers(int **grid) {
    int roll_no = 1;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            grid[i][j] = roll_no;
            roll_no++;
        }
    }
    return 0;
}

int display_roll_numbers(int **grid) {
    printf("Roll Numbers: \n");
    printf("\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d\t", grid[i][j]);
        }
        printf("\n");
    }   
    return 0; 
}

float calculate_average(int **grid) {
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            sum += grid[i][j];
        }
    }
    float average = (float) sum / 36;
    return average;
}

int deallocate_memory(int **grid) {
    for (int i = 0; i < 6; i++) {
        free(grid[i]);
    }
    free(grid);
    return 0;
}

int main() {
    int **grid;

    // allocate memory;
    grid = allocate_memory();

    // initialize roll numbers
    initialize_roll_numbers(grid);

    // display roll numbers
    display_roll_numbers(grid);
    printf("\n");

    // calculate average
    float average = calculate_average(grid);
    printf("Average roll number: %.1f",average);

    // deallocate memory
    deallocate_memory(grid);

    return 0;
}

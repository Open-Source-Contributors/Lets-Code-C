#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll_no;
};

// function to allocate memory to matrix and assign roll no
struct Student **create_matrix() {
    struct Student **grid = (struct Student **) malloc (6 * sizeof(struct Student *));
    for (int i = 0; i < 6;  i++) {
        grid[i] = (struct Student *) malloc (6 * sizeof(struct Student));
    }
    int roll = 1;
    for (int j = 0; j < 6; j++) {
        for (int k = 0; k < 6; k++) {
            grid[j][k].roll_no = roll;
            roll++;
        }
    }
    return grid;
}

// function to free memory allocated to matrix
void free_grid(struct Student **grid) {
    for (int i = 0; i < 6; i++) {
        free(grid[i]);
    }
    free(grid);
}

// function to find sum and multiplication of roll no of students two steps ahead and behind
int sum_multiplication(struct Student **grid, int row_no, int column_no) {
    int row_ahead = row_no - 2;
    int row_behind = row_no + 2;

    if (row_ahead < 1 || row_behind > 6) {
        printf("Out of bound.");
        return 0;
    } else {
        int sum = grid[row_ahead - 1][column_no - 1].roll_no + grid[row_behind - 1][column_no - 1].roll_no;
        int multiplication = grid[row_ahead - 1][column_no - 1].roll_no * grid[row_behind - 1][column_no - 1].roll_no;
        printf("Student: Sum is %d and Multiplication is %d.\n",sum,multiplication);
    }
}

int main() {
    // create matrix
    struct Student **student_matrix = create_matrix();

    // ask for row no and column no of selected student
    int row_no, column_no;
    do {
        printf("Enter the row no: ");
        scanf("%d",&row_no);
        printf("Enter the column no: ");
        scanf("%d",&column_no);
    } while(row_no > 6 || row_no < 1 || column_no > 6 || column_no < 1);

    printf("Gym Teacher: Student at row %d and column %d. Tell me the sum and multiplication of roll no of students two steps ahead and two steps behind you.\n",row_no, column_no);

    // display sum and multiplication
    sum_multiplication(student_matrix, row_no, column_no);

    // free matrix
    free_grid(student_matrix);

    return 0;
}
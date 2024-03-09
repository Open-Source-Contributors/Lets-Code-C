#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Student {
    int roll_no;
} Student;

Student** createMatrix(int rows, int cols) {
    Student** matrix = (Student**)malloc(rows * sizeof(Student*));
    for(int i = 0; i < rows; i++) {
        matrix[i] = (Student*)malloc(cols * sizeof(Student));
        for(int j = 0; j < cols; j++) {
            matrix[i][j].roll_no = i * cols + j + 1; // Assigning roll numbers
        }
    }
    return matrix;
}

void calculateSumAndMultiplication(Student** matrix, int rows, int cols, int selectedRow, int selectedCol) {
    if(selectedRow - 2 >= 0 && selectedRow + 2 < rows) {
        int sum = matrix[selectedRow - 2][selectedCol].roll_no + matrix[selectedRow + 2][selectedCol].roll_no;
        int multiplication = matrix[selectedRow - 2][selectedCol].roll_no * matrix[selectedRow + 2][selectedCol].roll_no;
        printf("Sum is %d and Multiplication is %d.\n", sum, multiplication);
    } else {
        printf("Selected student is too close to the border.\n");
    }
}

void freeMatrix(Student** matrix, int rows) {
    for(int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    srand(time(0));
    int rows = 6, cols = 6;
    Student** matrix = createMatrix(rows, cols);
    int selectedRow = rand() % rows;
    int selectedCol = rand() % cols;
    printf("Student at row %d, column %d, please tell me the sum and multiplication of the students two steps ahead and two steps behind you.\n", selectedRow + 1, selectedCol + 1);
    calculateSumAndMultiplication(matrix, rows, cols, selectedRow, selectedCol);
    freeMatrix(matrix, rows);
    return 0;
}

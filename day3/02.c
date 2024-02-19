#include <stdio.h>

// Define the Student structure
struct Student {
    char name[50];
    int roll_number;
    int total_marks;
};

// Function to input details for a student
void input details(struct Student *student) {
    printf("Enter student name: ");
    scanf("%s", student name);
    printf("Enter student roll number: ");
    scanf("%d", &student roll_number);
    printf("Enter total marks obtained out of 500: ");
    scanf("%d", &student total_marks);
}

// Function to display details of a student
void display details(struct Student student) {
    printf("Student name: %s\n", student.name);
    printf("Roll number: %d\n", student.roll_number);
    printf("Total marks obtained: %d\n", student.total_marks);
}

// Function to calculate and display the percentage of marks obtained
void calculate and display percentage(struct Student student) {
    float percentage = ((float)student.total_marks / 500) * 100;
    printf("Percentage obtained: %.2f%%\n", percentage);
}

int main() {
    struct Student student1, student2;

    // Input details for two students
    printf("Enter details for student 1:\n");
    input details(&student1);
    printf("Enter details for student 2:\n");
    input details(&student2);

    // Display details for both students
    printf("Details of student 1:\n");
    display details(student1);
    calculate and display percentage(student1);

    printf("Details of student 2:\n");
    display details(student2);
    calculate and display percentage(student2);

    return 0;
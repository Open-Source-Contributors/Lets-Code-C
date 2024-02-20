#include <stdio.h>

struct Student {
        char name[25];
        int roll_number;
        float total_marks;
};

int input_detail(struct Student *a);

int display_detail(struct Student b);

int percentage(struct Student c);

int main() {
    //input details for two students
    struct Student student1;
    input_detail(&student1);
    struct Student student2;
    input_detail(&student2);

    //display details of student
    display_detail(student1);
    display_detail(student2);

    //display percentage of student
    printf("For student1: ");
    percentage(student1);
    printf("For student2: ");
    percentage(student2);

    return 0;
}

int input_detail(struct Student *a) {
    printf("Enter the name: ");
    scanf("%s",(*a).name); //arrays itself work as pointer
    printf("Enter the roll number: ");
    scanf("%d",&((*a).roll_number)); 
    printf("Enter total marks obtained: ");
    scanf("%f",&((*a).total_marks));
    return 0;
}

int display_detail(struct Student b) {
    printf("Name: %s\n",b.name);
    printf("Roll Number: %d\n",b.roll_number);
    printf("Total Marks: %f\n",b.total_marks);
    return 0;
}

int percentage(struct Student c) {
    float percent = ((c.total_marks)/500)*100;
    printf("Percentage: %f\n",percent);
    return 0;
}

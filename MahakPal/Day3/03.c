#include <stdio.h>

struct Student
{
    char PhoneNumber[15];
    int Rollnumber;
    char Address[30];
    char Class[12];
    char Section;
    int Totalmarks;
};

int main()
{
    struct Student students[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Phone Number: ");
        scanf("%s", students[i].PhoneNumber);

        printf("Roll Number: ");
        scanf("%d", &students[i].Rollnumber);

        printf("Address: ");
        scanf(" %[^\n]", students[i].Address);

        printf("Class: ");
        scanf("%s", students[i].Class);

        printf("Section: ");
        scanf(" %c", &students[i].Section);

        printf("Total Marks (out of 500): ");
        scanf("%d", &students[i].Totalmarks);
    }

    // Displaying details for all students
    for (int i = 0; i < 5; i++)
    {
        printf("\nDetails for Student %d:\n", i + 1);
        printf("Phone Number: %s\n", students[i].PhoneNumber);
        printf("Roll Number: %d\n", students[i].Rollnumber);
        printf("Address: %s\n", students[i].Address);
        printf("Class: %s\n", students[i].Class);
        printf("Section: %c\n", students[i].Section);
        printf("Total Marks: %d\n", students[i].Totalmarks);
    }

    return 0;
}
#include <stdio.h>

struct student
{
    char PhoneNumber[20];
    int Rollnumber;
    char Address[30];
    char Class[12];
    char Section;
    int Totalmarks;
};
int main(){
    struct student student[5];

    for ( int i = 0; i < 5; i++){
    printf("%d Enter student details:\n", i+1);

    printf("Enter phonenumber\n");
    scanf("%s", &student[i].PhoneNumber);
    
    printf("Enter rollnumber\n");
    scanf("%d", &student[i].Rollnumber);
    
    printf("Enter address\n");
    scanf("%[^\n]", &student[i].Address);
    
    printf("Enter class\n");
    scanf("%s", &student[i].Class);
    
    printf("Enter section\n");
    scanf("%c", &student[i].Section);
    
    printf("totalmarks obtained(out of 500)\n");
    scanf("%d", &student[i].Totalmarks);
    }

    for (int i = 0; i < 5; i++)
    
    {   printf("\n%d Enter student details\n", i + 1);
        printf("%s phonenumber\n", student[i].PhoneNumber);
        printf("%d rollnumber\n", student[i].Rollnumber);
        printf("%s address\n", student[i].Address);
        printf("%s class\n", student[i].Class);
        printf("%c section\n", student[i].Section);
        printf("%d totalmarks(out of 500)\n", student[i].Totalmarks);
    }

    return 0;
}
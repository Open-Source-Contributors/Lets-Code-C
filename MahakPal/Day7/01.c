#include <stdio.h>
struct Subject{
    char name[20];
    int score;
    };
    int print_subject(struct Subject scores[], int n){

    for (int i = 0; i < n; i++) 
        printf("%s ", scores [i].name);
    }

    int main()
    {
    struct Subject preboard1[] = {
        {"English", 67},
        {"Mathematics", 78},
        {"Social Science", 89},
        {"Hindi", 92},
        {"Science", 70},
    };
    struct Subject preboard2[] = {
        {"English", 76},
        {"Mathematics", 82},
        {"Social Science", 56},
        {"Hindi", 77},
        {"Science", 94},
    };
    int subject_score = sizeof(preboard1) / sizeof(preboard1[0]);
     printf("first Preboard Subjects in Ascending Order of Scores:\n");
     print_subject(preboard1, subject_score);
     
     printf("second Preboard Subjects in Ascending Order of Scores:\n");
    print_subject(preboard2, subject_score);
     return 0;
}

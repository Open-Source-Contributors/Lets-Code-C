#include <stdio.h>
#include <string.h>

typedef struct {
    char subject[20];
    int score1;
    int score2;
} Subject;

void sortSubjects(Subject subjects[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (subjects[i].score1 > subjects[j].score1) {
                Subject temp = subjects[i];
                subjects[i] = subjects[j];
                subjects[j] = temp;
            }
        }
    }
}

void printSubjects(Subject subjects[], int n) {
    printf("1st Preboard:\n");
    for (int i = 0; i < n; i++) {
        printf("%s: %d/100\n", subjects[i].subject, subjects[i].score1);
    }

    sortSubjects(subjects, n);

    printf("\n2nd Preboard:\n");
    for (int i = 0; i < n; i++) {
        printf("%s: %d/100\n", subjects[i].subject, subjects[i].score2);
    }
}

int main() {
    Subject subjects[] = {
        {"English", 67, 76},
        {"Mathematics", 78, 82},
        {"Social Science", 89, 56},
        {"Hindi", 92, 77},
        {"Science", 70, 94}
    };

    int n = sizeof(subjects) / sizeof(Subject);

    sortSubjects(subjects, n);
    printSubjects(subjects, n);

    return 0;
}

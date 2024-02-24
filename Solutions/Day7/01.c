#include <stdio.h>


int main() {
    struct score {
        char subject[50];
        int marks;
    };

    struct score preboard1[5] = {{"English",67},{"Mathematics",78},{"Social Science",89},{"Hindi",92},{"Science",70}};
    struct score preboard2[5] = {{"English",76},{"Mathematics",89},{"Social Science",56},{"Hindi",77},{"Science",94}};

    int i;
    int j;
    int n = 5;

    printf("1st Preboard subjects in ascending order or marks:\n");

    for (i=0; i<n-1; i++) {
        for (j=0; j<n-1-i; j++) {
            if (preboard1[j].marks > preboard1[j+1].marks) {
                struct score temp = preboard1[j];
                preboard1[j]=preboard1[j+1];
                preboard1[j+1]= temp;
            }
        }
    }
    for (i=0; i<5; i++) {
        printf("%s : %d\n",preboard1[i].subject,preboard1[i].marks);
    }

    printf("1st Preboard subjects in ascending order or marks:\n");

    for (i=0; i<n-1; i++) {
        for (j=0; j<n-1-i; j++) {
            if (preboard2[j].marks > preboard2[j+1].marks) {
                struct score temp = preboard2[j];
                preboard2[j]=preboard2[j+1];
                preboard2[j+1]= temp;
            }
        }
    }
    for (i=0; i<5; i++) {
        printf("%s : %d\n",preboard2[i].subject,preboard2[i].marks);
    }

    return 0;
    
}

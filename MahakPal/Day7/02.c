#include <stdio.h>

int main() {
    int input;
    int Mom_at_Home;
    int Tickets_Available;
    int Cycle_Available;
    int Popcorn_Available;
    int Blackpurse_Available;
    int Father_not_allow;

    while (1) {
        printf("Enter 1 for !momAtHome, 0 for mom not at home: ");
        scanf("%d", &input);
        if (input == 1) {
            Mom_at_Home = !input;
            break;
        }
    }

    if (!Mom_at_Home) {
        printf("Ayesha will go to the mall.\n");
    } else {
        printf("Ayesha will go for a picnic.\n");
    }

    if (Tickets_Available) {
        printf("She will watch a movie.\n");

        if (Popcorn_Available) {
            printf("She will buy popcorn during the interval.\n");
        } else {
            printf("Popcorn is too costly, she will buy chips.\n");
        }

    } else {
        printf("Tickets are not available, she will go shopping.\n");

        if (Blackpurse_Available) {
            printf("She will buy a black purse.\n");
        } else {
            printf("A black purse is not available, she will buy a pink top.\n");
        }
    }

    if (Cycle_Available) {
        printf("She will have a cycle ride.\n");
    } else {
        printf("Cycle is not available, she will go for a walk.\n");
    }

    if (!Father_not_allow) {
        printf("Father does not allow her plans, so she has to study for her exams.\n");
        printf("Her mom cannot do anything about it.\n");
    }

    return 0;
}
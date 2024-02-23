#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isMomAtHome = false;
    bool areTicketsAvailable = true;
    bool isCycleAvailable = true;
    bool isPopcornCostly = false;
    bool isBlackPurseAvailable = true;
    bool isFatherAllowing = true;

    if (!isMomAtHome) {
        printf("Ayesha will go to the mall.\n");
        if (areTicketsAvailable) {
            printf("Ayesha will watch a movie.\n");
            if (!isPopcornCostly) {
                printf("Ayesha will buy popcorn during the interval.\n");
            } else {
                printf("Ayesha will buy chips.\n");
            }
        } else {
            printf("Ayesha will go shopping.\n");
            if (isBlackPurseAvailable) {
                printf("Ayesha will buy a black purse.\n");
            } else {
                printf("Ayesha will buy a pink top.\n");
            }
        }
    } else {
        printf("Ayesha will go for a picnic.\n");
        if (isCycleAvailable) {
            printf("Ayesha will have a cycle ride.\n");
        } else {
            printf("Ayesha will go for a walk.\n");
        }
    }

    if (!isFatherAllowing) {
        printf("Ayesha has to study for her exams, and her mom cannot do anything about it.\n");
    }

    return 0;
}

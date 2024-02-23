#include <stdio.h>

int main() {
    char dad_allows_plans; // Use 'char' for yes/no input
    char mom_at_home;
    char movie_tickets, popcorn_costly, purse_available, cycle_available;

    printf("Does Ayesha's dad allow her plans (y/n)? ");
    scanf(" %c", &dad_allows_plans); // Add space before %c to avoid newline issues

    if (dad_allows_plans == 'y') {
        printf("Ayesha can pursue her plans!\n");

        printf("Is mom at home (y/n)? ");
        scanf(" %c", &mom_at_home);

        if (mom_at_home == 'y') {
            printf("Ayesha stays home and...\n");
            printf("Is a cycle available (y/n)? ");
            scanf(" %c", &cycle_available);

            if (cycle_available == 'y') {
                printf("Ayesha goes for a cycle ride.\n");
            } else {
                printf("Ayesha goes for a walk.\n");
            }
        } else {
            printf("Ayesha goes to the mall and...\n");
            printf("Are movie tickets available (y/n)? ");
            scanf(" %c", &movie_tickets);

            if (movie_tickets == 'y') {
                printf("Ayesha watches a movie.\n");
                printf("Is popcorn too costly (y/n)? ");
                scanf(" %c", &popcorn_costly);

                if (popcorn_costly == 'y') {
                    printf("Ayesha buys chips.\n");
                } else {
                    printf("Ayesha buys popcorn.\n");
                }
            } else {
                printf("Ayesha goes shopping.\n");
                printf("Is a black purse available (y/n)? ");
                scanf(" %c", &purse_available);

                if (purse_available == 'y') {
                    printf("Ayesha buys a black purse.\n");
                } else {
                    printf("Ayesha buys a pink top.\n");
                }
            }
        }
    } else {
        printf("Ayesha has to study for her exams, and her mom cannot do anything about it.\n");
    }

    return 0;
}

#include <stdio.h>

void stone_paper_scissors() {
    printf("Stone, Paper, Scissors Game\n");
    int choice1, choice2;
    printf("Player 1's turn. Enter your choice (1: Stone, 2: Paper, 3: Scissors): ");
    scanf("%d",&choice1);
    printf("Player 2's turn. Enter your choice (1: Stone, 2: Paper, 3: Scissors): ");
    scanf("%d",&choice2);

    if ((choice1 == 1 || choice1 == 2 || choice1 == 3) && (choice2 == 1 || choice2 == 2 || choice2 == 3)) {
        if (choice1 == 1) {
            printf("Player 1 chose Stone.\n");
        } else if (choice1 == 2) {
            printf("Player 1 chose Paper.\n");
        } else {
            printf("Player 1 chose Scissors.\n");
        }

        if (choice2 == 1) {
            printf("Player 2 chose Stone.\n");
        } else if (choice2 == 2) {
            printf("Player 2 chose Paper.\n");
        } else { 
            printf("Player 2 chose Scissors.\n");
        }

        if (choice1 == 1 && choice2 == 1) {
            printf("Tie!\n");
        } else if (choice1 == 1 && choice2 == 2) {
            printf("Player 2 wins!\n");
        } else if (choice1 == 1 && choice2 == 3) {
            printf("Player 1 wins!\n");
        } else if (choice1 == 2 && choice2 == 1) {
            printf("Player 1 wins!\n");
        } else if (choice1 == 2 && choice2 == 2) {
            printf("Tie!\n");
        } else if (choice1 == 2 && choice2 == 3) {
            printf("Player 2 wins!\n");
        } else if (choice1 == 3 && choice2 == 1) {
            printf("Player 2 wins!\n");
        } else if (choice1 == 3 && choice2 == 2) {
            printf("Player 1 wins!\n");
        } else {
            printf("Tie!\n");
        }
    } else {
        printf("Invalid choice.");
    }
}

int main() {
    stone_paper_scissors();

    return 0;

}

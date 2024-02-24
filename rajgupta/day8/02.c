#include <stdio.h>

void stone_paper_scissors() {
    int choice1, choice2;

    printf("Stone, Paper, Scissors Game\n");
    // Player 1's turn
    printf("Player 1's turn. Enter your choice (1: Stone, 2: Paper, 3: Scissors): ");
    scanf("%d", &choice1);

    // Player 2's turn
    printf("Player 2's turn. Enter your choice (1: Stone, 2: Paper, 3: Scissors): ");
    scanf("%d", &choice2);

    printf("\nPlayer 1 chose ");
    switch (choice1) {
        case 1:
            printf("Stone.\n");
            break;
        case 2:
            printf("Paper.\n");
            break;
        case 3:
            printf("Scissors.\n");
            break;
        default:
            printf("Invalid choice.\n");
            return;
    }

    printf("Player 2 chose ");
    switch (choice2) {
        case 1:
            printf("Stone.\n");
            break;
        case 2:
            printf("Paper.\n");
            break;
        case 3:
            printf("Scissors.\n");
            break;
        default:
            printf("Invalid choice.\n");
            return;
    }

    if (choice1 == choice2) {
        printf("It's a tie!\n");
    } else if ((choice1 == 1 && choice2 == 3) || (choice1 == 2 && choice2 == 1) || (choice1 == 3 && choice2 == 2)) {
        printf("Player 1 wins!\n");
    } else {
        printf("Player 2 wins!\n");
    }
}

int main() {
    stone_paper_scissors();
    return 0;
}
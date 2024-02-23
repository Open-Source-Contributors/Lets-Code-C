#include <stdio.h>

void stone_paper_scissors() {
    int player1, player2;
    printf("Stone, Paper, Scissors Game\n");
    printf("---------------------------\n");
    printf("Player 1's turn. Enter your choice (1: Stone, 2: Paper, 3: Scissors): ");
    scanf("%d", &player1);
    printf("\nPlayer 2's turn. Enter your choice (1: Stone, 2: Paper, 3: Scissors): ");
    scanf("%d", &player2);

    printf("\nPlayer 1 chose ");
    switch(player1) {
        case 1: printf("Stone.\n"); break;
        case 2: printf("Paper.\n"); break;
        case 3: printf("Scissors.\n"); break;
    }

    printf("Player 2 chose ");
    switch(player2) {
        case 1: printf("Stone.\n"); break;
        case 2: printf("Paper.\n"); break;
        case 3: printf("Scissors.\n"); break;
    }

    if(player1 == player2) {
        printf("It's a draw!\n");
    } else if((player1 == 1 && player2 == 3) || (player1 == 2 && player2 == 1) || (player1 == 3 && player2 == 2)) {
        printf("Player 1 wins!\n");
    } else {
        printf("Player 2 wins!\n");
    }
}

int main() {
    stone_paper_scissors();
    return 0;
}
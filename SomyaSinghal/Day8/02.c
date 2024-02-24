#include <stdio.h>
void stone_paper_scissors()
{
    //Allow two players (Player 1 and Player 2) to make their choices.
    int x; //choice of player 1
    printf("Player 1's turn. Enter your choice (1: Stone, 2: Paper, 3: Scissors): ");
    scanf("%d", &x);

    int y; // choice of player 2
    printf("Player 1's turn. Enter your choice (1: Stone, 2: Paper, 3: Scissors): ");
    scanf("%d", &y);

    //Display the choices made by each player
    printf("Player 1 chose %d \n", x);
    printf("Player 2 chose %d \n", y);

    //Determine the winner based on the game rules
    if (x == 1 && y == 3 || x == 2 && y == 1 || x == 3 && y == 2)
    printf("Player 1 wins!");

    else if (x == 1 && y == 2 || x == 2 && y == 3 || x == 3 && y == 1)
    printf("Player 2 wins!");

    else
    printf("Game Draw! ");

}
int main()
{
    stone_paper_scissors();
    
    return 0;
}
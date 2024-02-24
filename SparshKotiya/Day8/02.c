// Write a C function void stone_paper_scissors() to implement the Stone, Paper, Scissors game logic.

// Allow two players (Player 1 and Player 2) to make their choices.
// Determine the winner based on the game rules: Stone crushes Scissors, Scissors cut Paper, and Paper covers Stone.
// Display the choices made by each player and announce the winner.

// In the main function:
// Call the stone_paper_scissors function to start and play the game.

// Constraints:
// Use simple printf and scanf statements to interact with players.
// Display the choices made by each player and the result of the game.

#include<stdio.h>
void stone_paper_scissors(int player1,int player2);
int main ()
{
  int player1, player2;
  
  printf("\tStone, Paper, Scissor Game \n");
  printf("\t-------------------------- \n");

 printf("Player 1's turn. Enter your choice ");
 printf("(1: Stone, 2: Paper, 3: Scissors):");
 scanf("%d",&player1);
// print("\n");
 printf("\nPlayer 2's turn. Enter your choice ");
 printf("(1: Stone, 2: Paper, 3: Scissors):");
 scanf("%d",&player2);

stone_paper_scissors(player1 , player2);


    return 0;
}


void stone_paper_scissors(int player1,int player2)
{
   
    // int player1, player2;
    
    switch (player1)
    {
    case 1:
    printf("player 1 chose Stone\n");
        break;

    case 2:
    printf("player 1 chose Paper \n");
        break;
 
    case 3:
    printf("player 1 chose sicssor\n");
        break;

    
    default :
    printf("enter valide number 1, 2, 3\n");
        break;
    }

    switch (player2)
    {
    case 1:
    printf("player 2 chose Stone\n");
        break;

    case 2:
    printf("player 2 chose Paper\n ");
        break;
 
    case 3:
    printf("player 2 chose Scissors\n");
        break;

    
    default :
    printf("enter valide number 1, 2, 3\n");
        break; 

    }

    

    if (player1 == player2)
    {
        printf("it is a tie \n");

    }
    else 
       if (player1==1 && player2==2)
       {
        printf("player 1 wins ! \n");
       }
        else 
            if (player1==1 && player2==3)
            {
                printf("player 1 wins !\n");
            }
             else  //p1,c2
                if (player1==2 && player2==1)
                {
                    printf("player 1 wins !\n");
                }
                else 
                   if (player1==2 && player2==3)
                   {
                    printf("player 2 wins !\n");
                   }
                   else //p1,c3
                      if (player1==3 && player2==1)
                      {
                        printf("player 2 wins ! \n");
                      }
                      else 
                         if (player1==3 && player2==2)
                         {
                            printf("player 1 wins ! \n");
                         }
}                       
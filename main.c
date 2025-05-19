#include <stdio.h>
#include "tictactoe.h"

int main()
{
    // Initialize the game board: 'o' at index 0, positions 1-9 for players
    char game[] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    intro(game);

    char Player = 'X'; // Start with Player X
    int gameover = 0;  // Flag to track game status
    int movecount = 0; // Track moves for draw detection

    // Main game loop: runs until a win or draw
    while (gameover == 0)
    {
        printf("Type your answer Player %c : ", Player);
        int input;
        scanf("%d", &input);

        // Validate input: must be 1-9 and position must be free
        if (input >= 1 && input <= 9 && game[input] != 'X' && game[input] != 'O')
        {
            game[input] = Player; // Place player's symbol
            movecount++;
            intro(game);

            // Check for a win
            if (win(game, &gameover) == 1)
            {
                printf("Player %c wins!\n", Player);
            }
            // Check for a draw after 9 moves
            else if (movecount == 9)
            {
                gameover = 1;
                printf("It's a draw!\n");
            }
            Player = (Player == 'X') ? 'O' : 'X'; // Switch players
        }
        else
        {
            printf("Input error, Try Again\n");
        }
    }
    return 0;
}

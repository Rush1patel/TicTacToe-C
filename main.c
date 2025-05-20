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

    while (gameover == 0)
    {
        int input;
        int validInput = 0;

        // Loop until valid input is provided
        while (!validInput)
        {
            printf("Type your answer Player %c : ", Player);

            // Check if input is a number
            if (scanf("%d", &input) == 1)
            {
                // Validate input: must be 1-9 and position must be free
                if (input >= 1 && input <= 9 && game[input] != 'X' && game[input] != 'O')
                {
                    validInput = 1;
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
                    printf("Invalid input. Position already occupied or out of range. Try Again\n");
                }
            }
            else
            {
                printf("Invalid input. Please enter a number.\n");

                // Clear the input buffer
                int c;
                while ((c = getchar()) != '\n' && c != EOF)
                    ;
            }
        }
    }

    return 0;
}

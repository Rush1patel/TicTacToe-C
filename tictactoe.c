#include <stdio.h>

// Function prototypes
char intro(char arr[]);             // Displays the Tic-Tac-Toe board
int win(char arr[], int *gameover); // Checks for a win condition

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

// Displays the 3x3 board using ASCII art
char intro(char arr[])
{
    printf("        |           |         \n");
    printf("   %c    |     %c     |     %c    \n", arr[1], arr[2], arr[3]);
    printf("        |           |         \n");
    printf("------------------------------\n");
    printf("        |           |         \n");
    printf("   %c    |     %c     |    %c     \n", arr[4], arr[5], arr[6]);
    printf("        |           |         \n");
    printf("------------------------------\n");
    printf("        |           |         \n");
    printf("   %c    |     %c     |     %c    \n", arr[7], arr[8], arr[9]);
    printf("        |           |         \n\n");
}

// Checks for a win in rows, columns, or diagonals
int win(char arr[], int *gameover)
{
    // Check all winning combinations
    if ((arr[1] == arr[2] && arr[2] == arr[3] && (arr[1] == 'X' || arr[1] == 'O')) ||
        (arr[4] == arr[5] && arr[5] == arr[6] && (arr[4] == 'X' || arr[4] == 'O')) ||
        (arr[7] == arr[8] && arr[8] == arr[9] && (arr[7] == 'X' || arr[7] == 'O')) ||
        (arr[1] == arr[4] && arr[4] == arr[7] && (arr[1] == 'X' || arr[1] == 'O')) ||
        (arr[2] == arr[5] && arr[5] == arr[8] && (arr[2] == 'X' || arr[2] == 'O')) ||
        (arr[3] == arr[6] && arr[6] == arr[9] && (arr[3] == 'X' || arr[3] == 'O')) ||
        (arr[1] == arr[5] && arr[5] == arr[9] && (arr[1] == 'X' || arr[1] == 'O')) ||
        (arr[3] == arr[5] && arr[5] == arr[7] && (arr[3] == 'X' || arr[3] == 'O')))
    {
        *gameover = 1; // End the game
        return 1;      // Win detected
    }
    return 0; // No win
}

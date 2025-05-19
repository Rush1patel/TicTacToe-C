#include <stdio.h>
#include "tictactoe.h"

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

#include <stdio.h>
#include "tic_tac_toe.h"

// Function to initialize the board with empty spaces
void initializeBoard(char board[3][3]) 
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            board[i][j] = ' ';
        }
    }
}

// Function to display the board
void displayBoard(char board[3][3]) 
{
    printf("\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

// Function to check if a move is valid
int isValidMove(char board[3][3], int row, int col) 

{
    if (row >= 0 && row < 3 
           && col >= 0 && col < 3 && board[row][col] == ' ')
           return (1);
        return (0);
}
int checkWin(char board[3][3], char player)
{
    //Check rows, diagonals and columns.
    for (i = 0; i )
}
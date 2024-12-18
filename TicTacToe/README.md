# Tic Tac Toe Game Pseudocode

### Initialize the game:
1. Create a 3x3 grid (2D array) initialized to empty spaces (' ')
2. Set `currentPlayer` to 'X'
3. Set `gameOver` to `false`

### Main game loop:
While `gameOver` is `false`:
   1. Display the current board.
   
   2. Get the player's move:
      - Prompt the current player to input the row and column (0, 1, or 2)
      - Check if the input is valid:
        - The row and column should be between 0 and 2.
        - The selected cell must be empty (' ').
      - If invalid, ask the player to choose a valid move.

   3. Place the player's symbol on the grid:
      - Set `board[row][col] = currentPlayer`

   4. Check for a winner:
      - Check if there are three matching symbols in any row, column, or diagonal.
      - If `currentPlayer` has won:
        - Display "Player X/O wins!"
        - Set `gameOver = true`
        
   5. Check for a draw:
      - If all cells are filled and there is no winner:
        - Display "Draw!"
        - Set `gameOver = true`

   6. Switch players:
      - If `currentPlayer == 'X'`, set `currentPlayer = 'O'`
      - Else set `currentPlayer = 'X'`

### End of game
Display the final game result and exit.

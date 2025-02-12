#ifndef BOARD_H
#define BOARD_H

#include "player.h"

typedef struct {
    int rows;
    int cols;
    char **cells;
} GameBoard;

// Creates and initializes a new game board.
GameBoard* initializeBoard(int rows, int cols);

// Frees all memory associated with the board.
void freeBoard(GameBoard *board);

// Displays the board along with the players' positions.
void displayBoard(GameBoard *board, Player *player1, Player *player2);

#endif // BOARD_H

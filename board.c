#include <stdio.h>
#include <stdlib.h>
#include "board.h"

// Internal helper function to create a board.
// This is not exposed in the header.
static GameBoard* createBoardInternal(int rows, int cols) {
    GameBoard *board = (GameBoard*)malloc(sizeof(GameBoard));
    board->rows = rows;
    board->cols = cols;
    
    board->cells = (char**)malloc(rows * sizeof(char*));
    for (int i = 0; i < rows; i++) {
        board->cells[i] = (char*)malloc(cols * sizeof(char));
        for (int j = 0; j < cols; j++) {
            board->cells[i][j] = '.';
        }
    }
    return board;
}

GameBoard* initializeBoard(int rows, int cols) {
    return createBoardInternal(rows, cols);
}

void freeBoard(GameBoard *board) {
    for (int i = 0; i < board->rows; i++) {
        free(board->cells[i]);
    }
    free(board->cells);
    free(board);
}

void displayBoard(GameBoard *board, Player *player1, Player *player2) {
    // Clear the board cells.
    for (int i = 0; i < board->rows; i++) {
        for (int j = 0; j < board->cols; j++) {
            board->cells[i][j] = '.';
        }
    }
    // Mark the players' positions.
    board->cells[player1->position.row][player1->position.col] = '1'; // Player 1
    board->cells[player2->position.row][player2->position.col] = '2'; // Player 2

    // Display the board.
    for (int i = 0; i < board->rows; i++) {
        for (int j = 0; j < board->cols; j++) {
            printf("%c ", board->cells[i][j]);
        }
        printf("\n");
    }
}

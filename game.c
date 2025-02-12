#include <stdio.h>
#include "game.h"

void movePlayer(GameBoard *board, Player *player, int direction) {
    // Move the player based on the input direction,
    // ensuring the move remains within the board boundaries.
    if (direction == 0 && player->position.row > 0) {           // Up
        player->position.row--;
    } else if (direction == 1 && player->position.row < board->rows - 1) { // Down
        player->position.row++;
    } else if (direction == 2 && player->position.col > 0) {      // Left
        player->position.col--;
    } else if (direction == 3 && player->position.col < board->cols - 1) { // Right
        player->position.col++;
    }
}

int checkWinCondition(Player *player1, Player *player2) {
    // Check win conditions for both players.
    // Player 1 wins if they reach (4,4).
    if (player1->position.row == 4 && player1->position.col == 4) {
        player1->wins++;
        player2->losses++;
        return 1; // Player 1 wins.
    }
    // Player 2 wins if they reach (0,0).
    if (player2->position.row == 0 && player2->position.col == 0) {
        player2->wins++;
        player1->losses++;
        return 2; // Player 2 wins.
    }
    return 0; // No win condition met.
}

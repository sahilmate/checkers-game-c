#ifndef GAME_H
#define GAME_H

#include "player.h"
#include "board.h"

// Moves the given player in the specified direction:
// 0 = Up, 1 = Down, 2 = Left, 3 = Right.
void movePlayer(GameBoard *board, Player *player, int direction);

// Checks if any player has met the win condition.
// If Player 1 reaches (4,4) or Player 2 reaches (0,0),
// updates wins/losses accordingly and returns 1 or 2.
int checkWinCondition(Player *player1, Player *player2);

#endif // GAME_H

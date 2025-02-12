#include <stdio.h>
#include "board.h"
#include "player.h"
#include "position.h"
#include "game.h"

int main() {
    GameBoard *board = initializeBoard(5, 5);

    // Create players with starting positions.
    Position startPos1 = {0, 0}; // Player 1 starts at (0,0)
    Position startPos2 = {4, 4}; // Player 2 starts at (4,4)
    Player player1 = createPlayer("Player 1", startPos1);
    Player player2 = createPlayer("Player 2", startPos2);

    int currentPlayer = 1; // 1 for Player 1, 2 for Player 2

    while (1) {
        displayBoard(board, &player1, &player2);

        Player *activePlayer = (currentPlayer == 1) ? &player1 : &player2;
        printf("%s's turn. Enter move (0 = Up, 1 = Down, 2 = Left, 3 = Right): ", activePlayer->name);

        int move;
        if (scanf("%d", &move) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }
        movePlayer(board, activePlayer, move);

        // Check for win condition after the move.
        int winner = checkWinCondition(&player1, &player2);
        if (winner == 1) {
            printf("%s wins!\n", player1.name);
            break;
        } else if (winner == 2) {
            printf("%s wins!\n", player2.name);
            break;
        }

        // Switch turns.
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }

    freeBoard(board);
    freePlayer(&player1);
    freePlayer(&player2);

    return 0;
}

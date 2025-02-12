#ifndef PLAYER_H
#define PLAYER_H

#include "position.h"

typedef struct {
    char *name;          // Dynamically allocated string for player's name
    Position position;
    int wins;            // Track wins
    int losses;          // Track losses
} Player;

// Creates a player with the given name and starting position.
Player createPlayer(const char *name, Position startPosition);

// Frees any allocated memory associated with the player.
void freePlayer(Player *player);

#endif // PLAYER_H

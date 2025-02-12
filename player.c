#include <string.h> // For strdup
#include <stdlib.h>
#include "player.h"

Player createPlayer(const char *name, Position startPosition) {
    Player player;
    player.name = strdup(name); // Allocate memory for name
    player.position = startPosition;
    player.wins = 0;
    player.losses = 0;
    return player;
}

void freePlayer(Player *player) {
    if (player->name) {
        free(player->name);
        player->name = NULL;
    }
}


# Checkers Game in C

A simple two-player checkers-like game implemented in C. This project demonstrates dynamic memory management, modular code design with header files and source files, and a basic game loop with win/loss tracking.

## Overview

In this game, the board is a 5x5 grid. There are two players:

- **Player 1** starts at the top-left corner `(0, 0)` and wins by reaching the bottom-right corner `(4, 4)`.
- **Player 2** starts at the bottom-right corner `(4, 4)` and wins by reaching the top-left corner `(0, 0)`.

Each player moves one cell at a time in one of four directions:
- `0` — Up
- `1` — Down
- `2` — Left
- `3` — Right

After each move, the game checks for a win condition. The win counts and loss counts are updated accordingly.

## Features

- **Dynamic Board Creation:** The board is dynamically allocated and displayed as a 2D grid.
- **Player Management:** Players are created with names and initial positions, and memory for their names is managed properly.
- **Game Logic:** A simple turn-based game loop handles player moves and win condition checks.
- **Clean Code Structure:** The project is organized into multiple files:
  - Header files (`.h`) for function and type declarations.
  - Source files (`.c`) for function implementations.
  - A main executable that ties everything together.

## File Structure

```
checkers-game-c/
├── board.c        # Implementation of board-related functions
├── board.h        # Declarations for board management
├── game.c         # Game logic and player movement functions
├── game.h         # Declarations for game logic
├── main.c         # Main game loop and entry point
├── player.c       # Implementation of player functions
├── player.h       # Declarations for player management
└── position.h     # Definition of the Position struct used across the project
```

## How to Compile

You need to have a C compiler (such as `gcc`) installed. To compile the game, open a terminal in the project directory and run:

```bash
gcc main.c board.c game.c player.c -o checkers
```

This command compiles all the source files and links them into an executable named `checkers`.

## How to Run

After compiling, run the executable from your terminal:

- On Unix/Linux/macOS:
  ```bash
  ./checkers
  ```
- On Windows (if compiled to `checkers.exe`):
  ```bash
  checkers.exe
  ```

Follow the on-screen prompts to enter your move (0 for Up, 1 for Down, 2 for Left, 3 for Right). The board will update after each move, and the game will announce the winner once a win condition is met.

## Excluded Files

- **Compiled Executables:** Do not include binaries such as `checkers.exe` in the repository.
- **Runtime-Generated Files:** Files like `game_save.dat` (if generated at runtime) should be excluded using a `.gitignore` file.

A sample `.gitignore` might include:

```gitignore
# Ignore compiled binaries
*.exe

# Ignore runtime-generated files
game_save.dat
```

## Contributing

Contributions are welcome! If you have suggestions or improvements, please fork the repository and submit a pull request.


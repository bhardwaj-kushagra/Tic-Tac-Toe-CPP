# Tic-Tac-Toe in C++

A simple command-line Tic-Tac-Toe game built using C++. This game allows two players to play alternately and determines the winner or a draw based on the game rules.

## Features
- Two-player mode
- Simple command-line interface
- Detects win conditions and draws
- Input validation for occupied positions

## How to Play
1. Run the program.
2. Players take turns selecting positions (1-9) to place their mark (X or O).
3. The game board updates accordingly after each move.
4. The game ends when a player wins or the board is full (draw).

## Controls
- Enter a number between 1-9 to place your mark in the corresponding position on the board.
- If the position is already taken, you will be asked to choose another one.

## Setup & Compilation
### Prerequisites
- A C++ compiler (G++ recommended)

### Compilation
```sh
 g++ tic_tac_toe.cpp -o tic_tac_toe
```

### Run the Game
```sh
 ./tic_tac_toe  # On Linux/Mac
 tic_tac_toe.exe # On Windows
```

## Example Gameplay
```
  Tic-Tac-Toe

  1  |  2  |  3  
----------------
  4  |  5  |  6  
----------------
  7  |  8  |  9  

Player 1's turn. Enter position (1-9): 5
```

## License
This project is open-source and free to use.


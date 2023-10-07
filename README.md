# Tic Tac Toe Game in C++

This is a simple command-line Tic Tac Toe game implemented in C++. This game allows two players to take turns marking the cells of a 3x3 grid with 'X' and 'O' to compete for a win.

## How to Play

1. The game is played on a 3x3 grid.
2. Two players take turns, one using 'X' and the other 'O'.
3. To make a move, enter the row (0-2) and column (0-2) where you want to place your symbol.
4. The game ends when one player gets three of their symbols in a row horizontally, vertically, or diagonally, or when all cells are filled.
5. The player who achieves one of the winning conditions first wins the game. If all cells are filled, the game ends in a draw.

## Prerequisites

Before you can run this game, ensure that you have a C++ compiler installed on your system. You can use popular compilers like `g++` on Unix-like systems or Microsoft Visual C++ on Windows.

## How to Compile and Run

1. Open a terminal or command prompt.
2. Navigate to the directory where you have saved the C++ source code file (e.g., `tic_tac_toe.cpp`).
3. Compile the code using your C++ compiler. For example, with `g++`, you can use the following command:

   ```shell
   g++ -o tic_tac_toe tic_tac_toe.cpp
   ```

   This will generate an executable file named `tic_tac_toe`.

4. Run the game by executing the generated executable:

   ```shell
   ./tic_tac_toe
   ```

   The game will start, and you can follow the on-screen instructions to play.

## Game Rules

- Players take turns entering their moves by specifying the row and column of the cell they want to mark.
- Rows and columns are indexed from 0 to 2.
- The game will continue until one player wins or all cells are filled, resulting in a draw.

## Example Gameplay

Here's an example of what the game might look like during play:

```
   |   |
-----------
   |   |
-----------
   |   |

Player 1 (X), enter your move (row [0-2] and column [0-2]): 1 1

   |   |
-----------
   | X |
-----------
   |   |

Player 2 (O), enter your move (row [0-2] and column [0-2]): 0 0

 O |   |
-----------
   | X |
-----------
   |   |

...

Player 1 (X) wins!

```

## License

This Tic Tac Toe game is open-source and available under the MIT License. Feel free to modify and distribute it as you like.

Enjoy the game!

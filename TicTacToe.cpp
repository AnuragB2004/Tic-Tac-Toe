#include <iostream>

void printBoard(char board[3][3])
{
    std::cout << "\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << " " << board[i][j] << " ";
            if (j != 2)
            {
                std::cout << "|";
            }
        }
        std::cout << "\n";
        if (i != 2)
        {
            std::cout << "-----------\n";
        }
    }
    std::cout << "\n";
}

int checkWin(char board[3][3], char player)
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int main()
{
    char board[3][3] = {{' ', ' ', ' '},
                        {' ', ' ', ' '},
                        {' ', ' ', ' '}};

    int row, col;
    int currentPlayer = 0;
    int moves = 0;

    while (true)
    {
        printBoard(board);
        if (moves == 9 || checkWin(board, 'X') || checkWin(board, 'O'))
        {
            break;
        }

        std::cout << "Player " << currentPlayer + 1 << ", enter your move (row [0-2] and column [0-2]): ";
        std::cin >> row >> col;

        if (row < 0 || row > 2 || col < 0 || col > 2)
        {
            std::cout << "Invalid move! Please enter row and column values between 0 and 2.\n";
            continue;
        }

        if (board[row][col] == ' ')
        {
            board[row][col] = (currentPlayer == 0) ? 'X' : 'O';
            moves++;
            currentPlayer = (currentPlayer + 1) % 2;
        }
        else
        {
            std::cout << "Cell already taken! Try again.\n";
        }
    }

    printBoard(board);
    if (checkWin(board, 'X'))
    {
        std::cout << "Player 1 (X) wins!\n";
    }
    else if (checkWin(board, 'O'))
    {
        std::cout << "Player 2 (O) wins!\n";
    }
    else
    {
        std::cout << "It's a draw!\n";
    }

    return 0;
}

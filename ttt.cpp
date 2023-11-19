#include <iostream>
#include "Board.h"
using namespace std;

void intro();

int main(int argc, char **argv)
{
     Board tictactoe;
     char player = 'O';
     bool gameOver = false;

     intro();
     tictactoe.displayBoard();
     while (!gameOver)
     {
          if (player == 'O')
               player = 'X';
          else if (player == 'X')
               player = 'O';

          tictactoe.selectBoard(player);

          tictactoe.makeMove(player);

          tictactoe.checkMove(player, &gameOver);

          tictactoe.displayBoard();
     }

     return 0;
}

void intro()
{
     cout << "\nWelcome to ULTIMATE TIC-TAC-TOE!!\n"
          << "=================================\n";

     cout << "- Choose board/move using numbers from 1 to 9, where the position\n"
          << "  of the number is given by the following:\n\n";

     cout << " 1 | 2 | 3 \n"
          << "---+---+---\n"
          << " 4 | 5 | 6 \n"
          << "---+---+---\n"
          << " 7 | 8 | 9 \n\n";

     cout << "Let's begin!\n";
}

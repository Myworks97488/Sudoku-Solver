#include "sudoku.h"

int UNSOLVED = 81;
int SIZE_ROWS = 9;
int SIZE_COLUMNS=9;

int main()
{
    int ** puzzle;
    Squar *** sudoku;
    puzzle = createPuzzle();

    printpuzzle(puzzle);


   sudoku = setUpPuzzle(Puzzle );
    return 0;
}

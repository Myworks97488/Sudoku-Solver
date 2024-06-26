#ifdef SUDOKU_H
#define SUDOKU_H
#include <stdio.h>
#include <stdlib.h>
extern  int  UNSOLVED;
extern int SIZE_ROWS;
extern int SIZE_COLUM;
typedef struct Box
{
    struct Box * next ;
    Box;
}

typedef struct Square
{
  int number;
  /*[1] [1][1] [1] [1] [0] [1] [1] [1] 
    [9] [8] [7] [6] [5] [4] [3] [2] [1]*/
  int possible[9]
  int solvable;
  Box * Box;
  int row;
  int colum;
}Square;



int ** create puxzzle();
void printpuzzle(int ** puzzle);
Square *** setUpPuzzle(int** Puzzle);


#endif
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MSIZE 12

char theMaze[MSIZE][MSIZE];


int mazeTraverse(int[][12]);
void printMaze();
void initializeMaze();
void randomCoordinate();


char Maze[MSIZE][MSIZE];

int maze()
{
	printf("\n");
	printf("\n");
	printf("Maze Program\n");

	srand((unsigned int)time(NULL));

	initializeMaze();
	printMaze();

	randomCoordinate();


	return 0;
}

void initializeMaze() {
	int entranceRow, entranceCol, exitRow, exitCol;

		do {
			entranceRow = (rand() % MSIZE);
			exitRow = (rand() % MSIZE);
			entranceCol = (rand() % MSIZE);
			exitCol = (rand() % MSIZE);
		} while ((entranceRow == exitRow && entranceCol == exitCol) || (exitCol != 0 && exitCol != MSIZE - 1) || (entranceRow != 0 && entranceRow != MSIZE - 1)); 


	for (int i = 0; i < MSIZE; i++) {
		for (int j = 0; j < MSIZE; j++) {
			int randomRow = 1 + rand() % (MSIZE - 2);
			int randomCol = 1 + rand() % (MSIZE - 2);

			theMaze[i][j] = '#';

			if (i == MSIZE - 1 || i == 0 || j == MSIZE - 1 || j == 0)
			{
				theMaze[i][j] = '#';
			}
			
			
			if (randomCol && randomRow)	
					theMaze[randomRow][randomCol] = '.';
				
		}
	}

	theMaze[entranceRow][entranceCol] = '$';
	theMaze[exitRow][exitCol] = '@';

	printf("entrance col: %d \n", entranceCol);
	printf("entrance row: %d \n", entranceRow);
	printf("exit row: %d \n", exitRow);
	printf("exit col: %d \n", exitCol);

}


void printMaze() {
	for (int i = 0; i < MSIZE; i++) {
		for (int j = 0; j < MSIZE; j++) {
	
				printf("%c  ", theMaze[i][j]);
			
		}
		printf("\n\n");
	}
}

int  mazeTraverse(int array[MSIZE][MSIZE])
{
	return 0;
}


void randomCoordinate() {
	int randomRow = 1 + rand() % (MSIZE - 2); 
	int randomCol = 1 + rand() % (MSIZE - 2); 

	printf("\nRandom Coordinate: theMaze[%d][%d]\n", randomRow, randomCol);
	printf("Value at the random coordinate: %c\n", theMaze[randomRow][randomCol]);
}


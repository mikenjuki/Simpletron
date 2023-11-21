#include <stdio.h>

#define MSIZE 12

char theMaze[MSIZE][MSIZE];


int mazeTraverse(int[][12]);
void printMaze();

char Maze[MSIZE][MSIZE];

int maze()
{
	printf("\n");
	printf("\n");
	printf("Maze Program\n");

	//initialize maze
	for (int i = 0; i < MSIZE; i++) {
		for (int j = 0; j < MSIZE; j++) {
			theMaze[i][j] = '#';
		}
	}

	printMaze();

	return 0;
}

void printMaze() {
	for (int i = 0; i < MSIZE; i++) {
		for (int j = 0; j < MSIZE; j++) {
			if (i == MSIZE - 1) {
				printf("*  ");
			}
			else {
				printf("%c  ", theMaze[i][j]);
			}
		}
		printf("\n\n");
	}
}

int mazeTraverse(int array[MSIZE][MSIZE])
{
	return 0;
}

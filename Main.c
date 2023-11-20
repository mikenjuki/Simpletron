#include <stdio.h>

int maze();
int quickSort();


//input-ouput
#define READ 10
#define WRITE 11

//load/store operations
#define LOAD 20
#define STORE 21

//arithmetic operations
#define ADD 30
#define SUBTRACT 31
#define DIVIDE 32
#define MULTIPLY 33

//transfer of control operations
#define BRANCH 40
#define BRANCHHNEG 41
#define BRANCHZERO 42
#define HALT 43

#define SIZE 100

int main()
{

	printf("\n*** Welcome to Simpletron ***\n \n*** Please enter your program one instruction ***\n \n*** (or data word) ata a time. I will type the ***\n \n*** location number and a question mark (?). ***\n \n*** You then tpe the word for that location. ***\n \n*** Type the sentinel -9999 to stop entering ***\n \n*** your program. ***\n");

	int memory[SIZE] = {0};

	memory[0] = 1007; // Instruction: Read A
	memory[1] = 1008; // Instruction: Read B
	memory[2] = 2007; // Instruction: Load A
	memory[3] = 3008; // Instruction: Add B
	memory[4] = 2109; // Instruction: Store C
	memory[5] = 1109; // Instruction: Write C
	memory[6] = 4300; // Instruction: Halt
	memory[7] = 0;    // Variable A
	memory[8] = 0;    // Variable B
	memory[9] = 0;    // Result C

	int accumulator = 0, instructionCounter = 0;

	// maze();
	quickSort();


	return 0;
}
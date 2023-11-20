#include <stdio.h>

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


	return 0;
}
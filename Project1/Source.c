
/**
Class: CS 141, Fall 2016.
System: Windows 10, DevC++
Author: Jakub 
**/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
// Declaring constant variable "SHOW_DEBUG" letting user to debug code. 1 show's all 3185 possibilities, 
//while 0 hides all 3185 possibilites.
const int SHOW_DEBUG = 1;


// Function called checkOperator that checks if the operator is either +, -, *, /. If the statement is 
//true, the code keeps running.If statement is false it returns 1, otherwise it returns 0.
int checkOperator(char opr) {
	if ((opr == '+') || (opr == '-') || (opr == '*') || (opr == '/')) {
		return 1;

	}
	else {
		return 0;
	}
}//end of function checkOperator



 //SolveGame allows user to input 3 operators and try to get the value 24.
int solveGame(int num1, int num2, int num3, int num4, char opr1, char opr2, char opr3) {

	//Each result variables store the computation of 2 numbers that are either being added, subtracted, multiplied, or divided.
	int result1;
	int result2;
	int result3;

	//ReturnCharacter acts as an "Enter" button for user, after he/she puts in 3 operators
	char returnCharacter;

	//CheckSpaces is declared as 0 for us to run our while loop.
	char checkSpaces = 0;

	//Print statement telling user to enter one of the 4 operators.
	printf("Enter the three operators to be used (+,-,*, or /):");



	//While loop to make sure user in not entering any wrong characters, and not entering more than 3.
	while (checkSpaces == 0) {
		// Let's user enter 3 operators followed by enter button
		scanf(" %c%c%c%c", &opr1, &opr2, &opr3, &returnCharacter);

		// Statment that checks if user uses "enter" keypad after typing in operators
		if (returnCharacter != '\n') {
			//If it is not \n, then it displays error message
			printf("Enter 3 operators only(+, -, *, or /). Please try again:");
		}

		// Checks if operators(opr1, opr2, opr3) are either +,-,*, or /.
		else if ((checkOperator(opr1) == 0) || (checkOperator(opr2) == 0) || (checkOperator(opr3) == 0)) {
			//If they are not, then it displays error message.
			printf("Sorry invalid character(s). Please re-enter opertaor:");
		}

		else {
			//If everything is correct, we make this loop false so the code keeps running.
			checkSpaces = 1;

		}
	}

	//If opr1 is +, then add the following numbers
	if (opr1 == '+') {
		result1 = num1 + num2;
		printf(" %d + %d is: %d\n", num1, num2, result1);
	}

	//If opr1 is -, then subtract the following numbers
	if (opr1 == '-') {
		result1 = num1 - num2;
		printf(" %d - %d is: %d\n", num1, num2, result1);
	}

	//If opr1 is *, then multiply the following numbers
	if (opr1 == '*') {
		result1 = num1 * num2;
		printf(" %d * %d is: %d\n", num1, num2, result1);
	}

	//If opr1 is /, then divide the following numbers
	if (opr1 == '/') {
		result1 = num1 / num2;
		printf(" %d / %d is: %d\n", num1, num2, result1);
	}

	//If opr2 is +, then add the following numbers
	if (opr2 == '+') {
		result2 = result1 + num3;
		printf("%d + %d is: %d\n", result1, num3, result2);
	}

	//If opr2 is -, then subtract the following numbers
	if (opr2 == '-') {
		result2 = result1 - num3;
		printf("%d - %d is: %d\n", result1, num3, result2);
	}

	//If opr2 is *, then multiply the following numbers
	if (opr2 == '*') {
		result2 = result1 * num3;
		printf("%d * %d is: %d\n", result1, num3, result2);
	}

	//If opr2 is /, then divide the following numbers
	if (opr2 == '/') {
		result2 = result1 / num3;
		printf("%d + %d is: %d\n", result1, num3, result2);
	}

	//If opr3 is +, then add the following numbers
	if (opr3 == '+') {
		result3 = result2 + num4;
		printf("%d + %d is: %d\n", result2, num4, result3);
	}

	//If opr3 is -, then subtract the following numbers
	if (opr3 == '-') {
		result3 = result2 - num4;
		printf("%d - %d is: %d\n", result2, num4, result3);
	}

	//If opr3 is *, then multiply the following numbers
	if (opr3 == '*') {
		result3 = result2 * num4;
		printf(" %d * %d is: %d\n", result2, num4, result3);
	}

	//If opr3 is /, then divide the following numbers
	if (opr3 == '/') {
		result3 = result2 / num4;
		printf(" %d / %d is: %d\n", result2, num4, result3);

	}


	//CHeck if user inputted operators yield value 24.
	if (result3 == 24)
	{
		//If value is 24 print this statement.
		printf("You're a Genius!\n");
	}
	else {
		//if value is not 24 print this statement.
		printf("Sorry, not correct\n");
	}
} //End of function solveGame



  //MAIN
int main() {

	//Declaring numbers as doubles
	double num1;
	double num2;
	double num3;
	double num4;

	// declaring randomNumber
	int randomNumber;

	//Declaring character playAgain
	char playAgain;

	//Declaring 4 operators
	char opr1 = '+';
	char opr2 = '-';
	char opr3 = '*';
	char opr4 = '/';

	//Declaring line number
	int lineNumber = 0;

	//Declaring where num1, num2, num3, num4 will be stored
	int numA;
	int numB;
	int numC;
	int numD;


	//Print statements giving info about the project & project producer
	printf("Author: Jakub Glebocki\n");
	printf("Program: #1, TwentyFour\n");
	printf("TA: HoangMinh  HuynhNguyen, Mon 11am- 11:50am\n");
	printf("Aug 28, 2016\n");
	printf("Welcome to the game of TwentyFour.  Using each of the four numbers shown below exactly once, combining them somehow with the basic mathematical operators (+,-,*,/) to yield the value twenty-four.\n");


	// Initialize random number generator.										//Professor's Reed's comments
	// Only do this ONCE in your program!										//Professor's Reed's comments
	//use srand( time(0)); to give different values each time.					//Professor's Reed's comments
	srand(time(0));



	//Beginning my do while loop, which goes over 64 print statments to generator 3185 possible solutions that == 24.
	do {
		//Having comupter choose a random set and store it in randomNumber.
		randomNumber = rand() % 3185;


		//Every time the do loop repeats, LineNumber starts at 0.
		lineNumber = 0;


		//Show's debugging message if DEBUG is on.
		if (SHOW_DEBUG)
		{
			printf("***START DEBUG DISPLAY***\n");
		}


		//All possibilities (64 total print statements)
		for (num1 = 1; num1 <= 9; num1++) {
			for (num2 = 1; num2 <= 9; num2++) {
				for (num3 = 1; num3 <= 9; num3++) {
					for (num4 = 1; num4 <= 9; num4++) {

						// Check for all 64 possible combinations of operators for the 4 numbers.           //Professor's Reed's comments

						/************************************EACH OF THESE PERFORM VERY SIMILIARLY & APPLIES TO THE NEXT 64 BLOCKS OF CODE**************************************
						Each If statement first runs and checks to see if it == 24
						Each Second if statement if lineNumber is randomNumber(selected by computer) then
						store num1, num2, num3, num4 values to A, B, C, D.
						Each SHOW_DEBUG is global variable. if 0, it hides the print statement. if 1,
						then it shows the solutions.

						********************************************************************************************************************************************************/

						//Performs (+++) combination
						if ((((num1 + num2) + num3) + num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d+%d+%d+%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						//Performs (++-) combination
						if ((((num1 + num2) + num3) - num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d+%d+%d-%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						//Performs (++*) combination
						if ((((num1 + num2) + num3) * num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d+%d+%d*%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						//Performs (++/) combination
						if ((((num1 + num2) + num3) / num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d+%d+%d+%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						//Performs (+-+) combination
						if ((((num1 + num2) - num3) + num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d+%d-%d+%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						////Performs (+--) combination
						if ((((num1 + num2) - num3) - num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d+%d-%d-%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (+-*) combination
						if ((((num1 + num2) - num3)*num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d+%d-%d*%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (+-/) combination
						if ((((num1 + num2) - num3) / num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d+%d-%d/%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						//Performs (+*+) combination
						if ((((num1 + num2)*num3) + num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d+%d*%d+%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						////Performs (+*-) combination
						if ((((num1 + num2)*num3) - num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d+%d*%d-%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (+**) combination
						if ((((num1 + num2)*num3)*num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d+%d*%d*%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						//Performs (+*/) combination
						if ((((num1 + num2)*num3) / num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d+%d*%d/%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						//Performs (+/+) combination
						if ((((num1 + num2) / num3) + num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d+%d/%d+%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (+/-) combination
						if ((((num1 + num2) / num3) - num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d+%d/%d-%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (+/*) combination
						if ((((num1 + num2) / num3)*num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d+%d/%d*%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (+//) combination
						if ((((num1 + num2) / num3) / num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d+%d/%d/%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (-++) combination
						if ((((num1 - num2) + num3) + num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d-%d+%d+%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						//Performs (-+-) combination
						if ((((num1 - num2) + num3) - num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d-%d+%d-%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (-+*) combination
						if ((((num1 - num2) + num3)*num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d-%d+%d*%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (-+/) combination
						if ((((num1 - num2) + num3) / num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d-%d+%d/%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						//Performs (--+) combination
						if ((((num1 - num2) - num3) + num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d-%d-%d+%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (---) combination
						if ((((num1 - num2) - num3) - num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d-%d-%d-%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						//Performs (--*) combination
						if ((((num1 - num2) - num3)*num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d-%d-%d*%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						//Performs (--/) combination
						if ((((num1 - num2) - num3) / num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d-%d-%d/%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						//Performs (-*+) combination
						if ((((num1 - num2)*num3) + num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d-%d*%d+%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (-*-) combination
						if ((((num1 - num2)*num3) - num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d-%d*%d-%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (-**) combination
						if ((((num1 - num2)*num3)*num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d-%d*%d*%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (-*/) combination
						if ((((num1 - num2)*num3) / num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d-%d*%d/%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						//Performs (-/+) combination
						if ((((num1 - num2) / num3) + num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d-%d/%d+%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (-/-) combination
						if ((((num1 - num2) / num3) - num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d-%d/%d-%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (-/*) combination
						if ((((num1 - num2) / num3)*num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d-%d/%d*%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (-//) combination        
						if ((((num1 - num2) / num3) / num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d-%d/%d/%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						//Performs (*++) combination
						if ((((num1*num2) + num3) + num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d*%d+%d+%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (*+-) combination
						if ((((num1*num2) + num3) - num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d*%d+%d-%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (*+*) combination
						if ((((num1*num2) + num3)*num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d*%d+%d*%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (*+/) combination
						if ((((num1*num2) + num3) / num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d*%d+%d/%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						//Performs (*-+) combination
						if ((((num1*num2) - num3) + num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d*%d-%d+%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (*--) combination
						if ((((num1*num2) - num3) - num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d*%d-%d-%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (*-*) combination
						if ((((num1*num2) - num3)*num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d*%d-%d*%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (*-/) combination
						if ((((num1*num2) - num3) / num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d*%d-%d/%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						//Performs (**+) combination
						if ((((num1*num2)*num3) + num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d*%d*%d+%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (**-) combination
						if ((((num1*num2)*num3) - num4) == 24) {
							if (lineNumber == randomNumber) {

								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d*%d*%d-%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (***) combination
						if ((((num1*num2)*num3)*num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d*%d*%d*%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (**/) combination
						if ((((num1*num2)*num3) / num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d*%d*%d/%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						//Performs (*/+) combination
						if ((((num1*num2) / num3) + num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d*%d/%d+%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (*/-) combination
						if ((((num1*num2) / num3) - num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d*%d/%d-%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (*/*) combination
						if ((((num1*num2) / num3)*num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d*%d/%d*%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (*//) combination
						if ((((num1*num2) / num3) / num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d*%d/%d/%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						//Performs (/++) combination
						if ((((num1 / num2) + num3) + num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d/%d+%d+%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (/+-) combination
						if ((((num1 / num2) + num3) - num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d/%d+%d-%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (/+*) combination
						if ((((num1 / num2) + num3)*num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d/%d+%d*%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (/+/) combination
						if ((((num1 / num2) + num3) / num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d/%d+%d/%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						//Performs (/-+) combination
						if ((((num1 / num2) - num3) + num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d/%d-%d+%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (/--) combination
						if ((((num1 / num2) - num3) - num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d/%d-%d-%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (/-*) combination
						if ((((num1 / num2) - num3)*num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d/%d-%d*%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (/-/) combination
						if ((((num1 / num2) - num3) / num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d/%d-%d/%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						//Performs (/*+) combination
						if ((((num1 / num2)*num3) + num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d/%d*%d+%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (/*-) combination
						if ((((num1 / num2)*num3) - num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d/%d*%d-%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (/**) combination
						if ((((num1 / num2)*num3)*num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d/%d*%d*%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (/*/) combination
						if ((((num1 / num2)*num3) / num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d/%d*%d/%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

						//Performs (//+) combination
						if ((((num1 / num2) / num3) + num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d/%d/%d+%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (//-) combination
						if ((((num1 / num2) / num3) - num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d/%d/%d-%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (//*) combination
						if ((((num1 / num2) / num3)*num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf("%d:", lineNumber);
								printf("%d/%d/%d*%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}
						//Performs (///) combination
						if ((((num1 / num2) / num3) / num4) == 24) {
							if (lineNumber == randomNumber) {
								numA = num1;
								numB = num2;
								numC = num3;
								numD = num4;
							}
							lineNumber = lineNumber + 1;
							if (SHOW_DEBUG) {
								printf(" %d:", lineNumber);
								printf(" %d/%d/%d/%d\n", (int)num1, (int)num2, (int)num3, (int)num4);
							}
						}

					}//end for loop 4
				}//end for loop 3
			}// end for loop 2
		}//end for loop 1

		 //Shows END DEBUG if debug is on
		if (SHOW_DEBUG)
		{
			printf("***END DEBUG DISPLAY***\n");
		}

		//Print statement for random generated number selected by rand()
		printf("This is Set: %d. The numbers to use are: %d %d %d %d\n", randomNumber + 1, numA, numB, numC, numD);

		//calling function with parameters that executes user's operator inputs
		solveGame(numA, numB, numC, numD, opr1, opr2, opr3);

		//Asks to play again
		printf("Would you like to play again?(Y/N)");

		//Lets user input Y or N to play again
		scanf("%c", &playAgain);

		//while user selects Y or y, then while loop is true, meaning it will keep running until user inputs N.
	} while (playAgain == 'Y' || playAgain == 'y');


	return 0;
}


/*H**********************************************************************
* AUTHOR :   Razie Hyria        START DATE :    JAN 12TH 2023
* FILENAME :        ConvDecimal_to_OtherBasesc           
* COURSE NAME:      CMPSC 472 Section 001: Operating Systems
* SEMESTER:         SPRING 2023
*
* DESCRIPTION :
*       A C Programming Lab to Convert Decimal to Hex, Binary, and Octal.
*
* PUBLIC FUNCTIONS :
*       int Binary converter
*       int Hexadecimal converter
*       int Octal converter
*
* NOTES :
*       These functions feature C Arithmetic Operators
*       Copyright PSU Abington
*
* 
*
* CHANGES :
*
* REF NO  VERSION DATE    WHO     DETAIL
*
*H*/

#include <stdio.h>
#include <ctype.h> // header file for checking character types for user input
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// defining the min and max input values for cleaner code
#define min -2
#define max 2000000
#define exit -1

int userInput;
bool isRunning = true;


void flush_stream();
void ConvDecimal(int decimal, int base);

//  conv function 
/* q = 200
    while (quotient > 0)
    r = q%2
    q = q/2
    convDec(int x, int divbase);

	Using formula from in class discussion, and classmate Anthonys suggestion/solution 
	using format identifires for printf
    
    */
void ConvDecimal(int decimal, int base)
{	
	// storing the remainder
	int remainder = decimal%base;

	if(decimal == 0) // exist clause for the while loop
	{
		printf("0"); //printing the value
		return; // exiting the function
	}
	
	// recursively calls itself until the value is 0, and then prints the solution backwards (due to princ. of recurrsion)
	ConvDecimal(decimal/base,base);	
	
	if(remainder < 10) // for octol and binary bases
	{
		printf("%d", remainder);
	}
	else // hexadecimal bases check using the format identifiers mentioned above
	{
		printf("%c", remainder-10+'A');
	}			
}
/*
 The scanf buffer is used with the %d integer format specfifier so that the program or scanner knows to accept 
an integer. When this doesnt occur, the program gets caught in an infinite loop, since the scanner doesnt know what to do with that 
unexpected value. The function below "flushes" the stdin input stream so that the user can enter another value

Borrowed from StackOverflow:
https://stackoverflow.com/a/26081123/17628672

*/
void flush_stream(void)// clearing the scanf buffer
{
	int c;
    while ( (c = getchar()) != '\n' && c != EOF ) { }
}

int main()
{
	
    // welcome message
    printf("\nWelcome to the Decimal converter! Type in -1 to exit. \n");
    printf("Your number will be converted into Binary, Hex, and Octal! \n"); 
	
	// will loop until isRunning = false
    while(isRunning)
    {
		printf("Input an integer from 0 -> 2,000,000 to convert: \n"); //ask user input
		
		bool isValidating = true;
		while(isValidating)
		{
			
			if(scanf("%d", &userInput) != 1) // checks to see if the character is not an int
				{
					fputs("\nInvalid entry! Try Again! \n", stderr);
					flush_stream();
				}	
			else if(userInput <= min) // validation process to check if its less than 0
				{
					printf("%d Too Small! Try Again! \n", userInput);
				}
			else if (userInput > max) // checks if greater than max
				{
					printf("%d Too big! Try Again!\n", userInput);  
				}
			else if (userInput == exit) // exit condition
				{
					printf("Thank you! Come again.");
					isValidating = false;  // exits current program
				}
			else // otherwise call on the ConvDec function and return output to user
				{ 
					printf("\nConverting %d..\n", userInput);
					printf("\nBinary: ");
					ConvDecimal(userInput,2);	
					printf("\nHexadecimal: ");
					ConvDecimal(userInput,16);
					printf("\nOctal: ");
					ConvDecimal(userInput,8);
					printf("\nInsert another number to try again or -1 to exit: ");
				}

		} // is validating
		
	isRunning = false; // used to exit function

	} // is running            
}
// end of main function

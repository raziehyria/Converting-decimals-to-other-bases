/*H**********************************************************************
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
* AUTHOR :   Razie Hyria        START DATE :    JAN 12TH 2023
*
* CHANGES :
*
* REF NO  VERSION DATE    WHO     DETAIL
*
*H*/

#include <stdio.h>

// header file for checking character types for user input
#include <ctype.h>
//#include "ConvDecimal().h"

// defining the min and max input values for cleaner code
#define min 0
#define max 2000000


int main()
//start of main function
{
    //store user input
    int userInput;
    printf("Welcome to the Decimal converter! \n");
    printf("Your number will be converted into Binary, Hex, and Octal! \n"); 
    
    // 'do' feature used to ask for the integer until a proper one is inserted
    do 
        /* validate the user input */
        {
            //ask user input
            printf("Input an integer from 0 -> 2,000,000 to convert: \n");
            
            //take user input () and store in variable
            scanf("%d", &userInput);

        }
        // prompts them to try again
        // while its not less than 0, greater than max, or a letter
        while(userInput < min || userInput > max || isalpha(userInput));
            {   
                printf("Invalid integer! Try Again! ");
            }
    
    printf("your digit was: %d \n", userInput);
    
    // call binary converter header function
   
    // call hex converter header function

    // call octol converter header function
    
    
    // store binary value
    // store hexadecimal value
    // store octol value

    
}
// end of main function



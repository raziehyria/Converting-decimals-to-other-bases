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
#include <ctype.h>// header file for checking character types for user input

// defining the min and max input values for cleaner code
#define min 0
#define max 2000000

 
int main()
{
    //store user input in int var and char var
    int userInput;
    char str = userInput;

    // welcome message
    printf("Welcome to the Decimal converter! \n");
    printf("Your number will be converted into Binary, Hex, and Octal! \n"); 
    
    do // 'do' feature used to ask for the integer until a proper one is inserted
        
        {
            printf("Input an integer from 0 -> 2,000,000 to convert: \n"); //ask user input
            scanf("%d", &userInput);  //take user input () and store in variable

        } while(userInput < min || userInput > max || isdigit(str) == 0); /* validate the user input */
            // prompts them to try again
            // while its not less than 0, greater than max, or a letter
    
    printf("your digit was: %d \n", userInput);
    
    
    
    // call converter function

    
    //printf("Invalid integer! Try Again! ");
                
     
    /* q = 200
    while (quotient > 0)
    r = q%2
    q = q/2
    store remainder somethere
    int arr[32]
    use one singular function w the same division method logic
    call funcion 3 times  and insert base to divide it by 
    convDec(int x, int divbase);
    */

    
}
// end of main function



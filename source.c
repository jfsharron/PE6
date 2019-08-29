//  ===========================================================================
//  Program:              PE6
//
//  File:                 source.c
//
//  Software Engineer:    Jonas Sharron
//
//  Date:                 29-August-2019
//
//  Purpose:              The sum of the squares of the first ten natural 
//					      numbers is,
//
//						  1^2 + 2^2 + ... 10^2 = 385
//						  
//						  The square of the sum of the first ten natural 
//                        numbers is,
//
//						  (1 + 2 + ... + 10)^2 = 3025
//
//                        Hence the difference between the sum of the squares 
//                        of the first ten natural numbers and the square of
//                        the sum is 3025 - 385 = 2640.
//
//                        Find the difference between the sum of the squares of
//                        the first one hundred natural numbers and the square 
//                        of the sum.
//
//  Parameters:           no parameters are passed; variable upperLimit
//                        obtained by user input
//
//  Returns:              returns 0 after successful execution; answer output
//                        to screen
//  ===========================================================================

#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<math.h>


//  ===========================================================================
int main()
{
    int upperLimit = 0;  //  user defined variable to mark the upper limit
    int sum = 0;		 //  sum of the squares of 1 - upperLimit
    int square = 0;		 //  sum squared of 1 - upperLimit
    int answer = 0;		 //  difference between square and sum

    //  gather user input (upperLimit)
    printf("Please enter the upper limit: ");
    scanf("%d", &upperLimit);

    //  calculate sum
    for (int i = 0; i <= upperLimit; i++)
    {
        sum = sum + (pow(i, 2));
    }

    //  calculate square
    for (int i = 0; i <= upperLimit; i++)
    {
        square = square + i;
    }
    square = (pow(square, 2));
    
    answer = (square - sum);

    //  print output
    printf("the sum is: %d\n", sum);
    printf("the square is: %d\n", square);
    printf("the answer is: %d\n", answer);

}  //  end main
//  ===========================================================================

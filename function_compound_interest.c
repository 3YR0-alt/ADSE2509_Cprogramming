/* C program that demonstrates passing values to a function by reference to calculate the compound interest on a loan/deposit amount. */

#include <stdio.h> // Pre-processor directive/command
#include <math.h>

// Declare a function prototype/(function declaration) for the calc_compound_interest function
void calc_compound_interest (float*ptrPrincipal,float rate, unsigned short years);

//main function begins program execution
int main()
{
    // Variable(s) to be used in the program
   float principalAmount, interestRate,initialAmount;

   unsigned short duration;

   //prompt the user for the principal amount
   printf("\nPlease enter the principal/loan amount:\n");
   scanf("%f",&principalAmount);
   initialAmount=principalAmount;

   //Prompt the user for the interest rate
   printf("\nPlease enter the interest rate:\n");
   scanf("%f",&interestRate);

   //Prompt the user for the duration in years
   printf("\nPlease enter the number of years the amount is to be deposited/loaned out:\n");
   scanf("%hu",&duration);

   //Calculate the compound interest using function
   calc_compound_interest(&principalAmount,interestRate,duration);

   //Display the loan/deposit details
   printf("\nLoan/Deposit details");
   printf("\n----------------------------------");
   printf("\nInitial Amount:%7.2f",initialAmount);
   printf("\nInterest rate:%2.df%%",interestRate);
   printf("\nDuration in years:%hu",duration);
   printf("\nAmount paid/Collected:%7.2f",principalAmount);
   printf("\n----------------------------------");
    return 0;
}// End of function main

//Function definition of the calc_compound_interest function
void calc_compound_interest (float*ptrPrincipal,float rate, unsigned short years)
{
   //Calculat ethe compound interest by modifying the principal directly
   *ptrPrincipal=*ptrPrincipal*pow(1+(rate/100),years);
}// End of function squarer

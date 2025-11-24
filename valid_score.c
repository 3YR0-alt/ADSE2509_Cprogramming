/*C program that accepts a score from the user and tells them whether its valid or invalid.*/
#include <stdio.h>

//Main function begins program execution
int main()
{
   //Variable to be used in the program
   int score;

   //Prompt the user for a certain score
    printf("Please enter a number and i\'ll tell you if it\'s a valid or invalid score:\n");
    scanf("%d",&score);

    //Confirm whether its valid or invalid
    if(score < 0 || score > 100)
    {
        printf("\n%d is a invalid score.",score);
    }
    else
    {
        printf("\n%d is an valid score.",score);
    }

    return 0;
}

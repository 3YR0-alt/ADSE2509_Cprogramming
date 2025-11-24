/*C program that displays the first ten integers using the do...while loop.*/
#include <stdio.h>

int main()
{
  //Variable to be used in the program
  int n = 1;
  do
  {
      printf("Current value of N is :%02d\n",n);
      n++;
  }

   while(n<=10);

    return 0;
}

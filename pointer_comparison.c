/*C program that ddemonstrates the pointer arithmetic operations.*/
#include <stdio.h>

int main()
{
//Variables to be used in the program
  float num1 = 10.5, num2 = 20.7;

  //Declare float pointers and assign them the adresses of num1 &num2
  float *ptr_num1 = &num1,*ptr_num2=&num2;

  //Display the above values and their storage locations/addresses
  printf("\nValue of num1 is %.1f and it's stored in the address %p.",num1, ptr_num1);
  printf("\n Value of num2 is %.1f and it's stored in the address %p.",num2, ptr_num2);

  if (ptr_num1>ptr_num2)
    printf("\nptr_num1 is stored aafter ptr_num2");
  else
    printf("\nptr_num1 is not stored after ptr_num2");

  //Check if num1 is stored after num2
  printf(ptr_num1>ptr_num2? "\nptr_num1 is stored after ptr_num2":
         "\nptr_num1 is not stored after ptr_num2");

         //check if num1 is stored before num2
         printf(ptr_num1<ptr_num2? "\nptr_num1 is before after ptr_num2":
         "\nptr_num1 is not before after ptr_num2");

         //compare the pointers for equality
         if(ptr_num1 == ptr_num2)
            printf("\nThe pointers are equal");
         else
            printf("\nThe pointers are not equal");

        //compare the values pointed to for equality
        printf(*ptr_num1 == *ptr_num2?"\nThe values pointed by the pointers are equal" :
               "\nThe values pointed to by the pointers are different.");
    return 0;
}

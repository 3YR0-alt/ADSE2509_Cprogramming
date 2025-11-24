/*C program that ddemonstrates the pointer arithmetic operations.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
//Variables to be used in the program
  int arr []={5,10,15,20,25},n;
  int *ptr_arr=arr;//Declare a pointer to the first element in the integer array

  //Use a for loop to display the original element normally
  for(n=0;n<sizeof(arr)/sizeof(arr[0]);n++)
    printf("\nNormal access:%2d\tPointer Access:%2d",arr[n],*(ptr_arr+n));

  //Pointer arithmetic operations
  for(n=0;n<sizeof(arr)/sizeof(arr[0]);n++)
    printf("\nAddress of element %2d:%p \tValue of element %d:%2d",n+1,ptr_arr+n,
           n+1,(*ptr_arr+n));

    //subtracting pointers
    printf("\nSubracting pointers");
    printf("\nDifference between the 5th element (ptr_arr+4)and the 2nd element (ptr_arr+1) is"
           " %ld elements.",(ptr_arr+4)-(ptr_arr+1));

    //Incrementing and decrementing
    printf("\nOriginal value of the first element in the arr[] array is :%d.",*ptr_arr);
    (*ptr_arr)++;//Increment the value of the 1st element by 1 (i.e 5 + 1)
    printf("\nAfter incrementing the value of the first element by 1 we get :%d",*ptr_arr);

    printf("\nOriginal value of the second element in the arr[] array is :%d.",*(ptr_arr+1));
    (*(ptr_arr+1))--;//Decrement the value of the 1st element by 1 (i.e 10 - 1)
    printf("\nAfter decrementing the value of the second element by 1 we get :%d",*(ptr_arr+1));


    return 0;
}

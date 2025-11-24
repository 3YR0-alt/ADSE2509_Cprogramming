/*C program to demonstrate memory allocation using malloc(), calloc(), and realloc() and the free() functions.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Variables to be used in the code
    int *arr1,*arr2,*arr3;//Declare integer array pointers
    int n;//looping variable

    printf("====Demonstration of malloc(),calloc(), and realloc() and the free() functions.");

    //---------------------------------------------------------------------------------------------------
    //1.malloc() -> Allocates memory but doesnt initialise it.
    //---------------------------------------------------------------------------------------------------
    printf("\n1.Using malloc() to allocate 5 integers:\n");
    arr1 = (int*)malloc(5*sizeof(int));
    if(arr1==NULL)
    {
        printf("\nMemory allocation failed.\nPlease close some programs and try again!");
        return 1;
    }
    //display the uninitialised (garbage values)
    for(n=0; n<5; n++)
        printf("arr1[%d]=%dn",n,arr1[n]);

    //prompt the user for the values to be stored in the array arr1
//    for(n=0; n<5; n++)
//    {
//        printf("\nPlease enter the value/number to be stored in position %d:\n",n+1);
//        scanf("%d",&arr1[n]);
//    }
//
//    //Display the entered values
//    printf("\nThe values store in the *arr array are:\n");
//    for(n=0; n<5; n++)
//        printf("arr1[%d]=%d\n",n,arr1[n]);




    //---------------------------------------------------------------------------------------------------
    //2.calloc() -> Allocates memory but doesnt initialise it.
    //---------------------------------------------------------------------------------------------------
    printf("\n2.Using calloc() to allocate 5 integers:\n");
    arr1 = (int*)calloc(7*sizeof(int));
    if(arr2==NULL)
    {
        printf("\nMemory allocation failed.\nPlease close some programs and try again!");
        free(arr1);//De-allocate/release memory allocated using malloc();
        return 1;
    }
    //display the initialised (garbage values)
    printf("\nThe values in the initialised *arr2 array are:\n");
    for(n=0; n<7; n++)
        printf("arr2[%d]=%dn",n,arr2[n]);

    //Store the first 7 multiples of five in arr2
    for(n=0; n<7; n++)
        arr2[n]=5*(n+1);

    //display the first 7 multiples of 5 stored in arr2
    printf("\nThe values stored in the *arr2 array are:\n");
    for(n=0; n<7; n++)
        printf("arr2[%d]=%2d\n",n,arr2[n]);


    //---------------------------------------------------------------------------------------------------
    //3.realloc() -> Resize previously allocated memory
    //---------------------------------------------------------------------------------------------------
    printf("\n3.Using realloc() to resize arr2 from 7 integers to 10 integers:\n");
    arr3 = (int*)realloc(arr2,10 * sizeof(int));
    if(arr3==NULL)
    {
        printf("\nMemory reallocation failed.\nPlease close some programs and try again!");
        free(arr2);//De-allocate/release memory allocated using calloc();
        free(arr1);//De-allocate/release memory allocated using malloc();
        return 1;
    }
    //Always assign back to the original pointer
    arr2=arr3;

    //Display the new memory indexes (7,8,and 9)contain garbage values
    printf("\nThe values at index 7,8,and 9 in *arr2 array are:\n");
    for(n=7; n<10; n++)
        printf("arr2[%d]=%dn",n,arr2[n]);

    //Allocate values at indexes(7,8,and 9)
    arr2[7]=8;
    arr2[8]=6;
    arr2[9]=5;

    //Display all values stored in arr2
    printf("\nThe values stored in the *arr2 after reallocation array are:\n");
    for(n=0;n<10;n++)
            printf("arr2[%d]=%2d\n",n,arr2[n]);

    //---------------------------------------------------------------------------------------------------
    //4.free()->Release previously allocated memory
    //---------------------------------------------------------------------------------------------------
    printf("4.Using free to release previously allocated memory:\n");
    free(arr1);
    free(arr2);
    //free(arr3);

    printf("memory freed succsessfully!\n");


    return 0;
}





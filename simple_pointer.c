#include <stdio.h>

int main()
{
    //Variables to be used in the code
    int num1=5,num2=7;
    int*ptr_num1;//Integer pointer declaration
    int num3;//Integer declaration

    //Make *ptr_num1 a pointer to num1
    ptr_num1=&num1;
    num3=*ptr_num1;//Assign the value 5 to num3 using a pointer (pointer indirection)
    int*ptr_num3=&num3;

    //Display the values of num1 & num3 and the memory address
    printf("The Original Value in num1 is %d and its stored in location/address :%x\n",num1,ptr_num1);
    printf("The Original value in num3 is %d and its stored in location/address : %x\n",num3,ptr_num3);

    //Re-assign num1 and display its value
    num1=8;
    printf("The Modified Value in num1 is %d and its stored in location/address :%x\n",num1,ptr_num1);

    //Re-assign num3 using its pointer and display its value
    *ptr_num3=4;
    printf("The Modified  value in num3 is %d and its stored in location/address : %x\n",num3,ptr_num3);


    return 0;
}

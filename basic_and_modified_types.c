/*C program to demonstrate the various C basic and modified data types.*/
#include <stdio.h>

int main()
{
    //Variables to be used in the program
    //Basic data types
    char ch = 'A';
    int n = 8;
    float vatRate = .16;
    double pi = 3.141592;
    long double largePi = 3.141592635589793238L;

    //Display the basic data types
    printf("\nDemonstrating the Basic and Modified data types in C.");
    printf("\n--------------------------------------------------------");
    printf("\nBasic Data Types");
    printf("\nchar:%c",c);
    printf("\nint:%i",n);
    printf("\nfloat:%2f",f);
    printf("\ndouble:%4lf",pi);
    printf("\nlong double:%.12Lf",largePi);

    //Type-modified data types
    signed char sc = -100;
    unsigned char uc = 200;
    short int si = -32768;
    unsigned short int usi = 65535;

    unsigned int ui = 4294967295U;
    long int li = 9223372036854775807L;
    unsigned long int uli = 18446744073709551615UL;

    //Display the modified data types
    printf("\nType-Modified Data Types");
    printf("\n---------------------------------------------------------------");
    printf("\nsigned char:%d",sc);
    printf("\nunsigned char:%u",uc);
    printf("\nshort int:%d",si);
    printf("\nunsigned short int:%u",usi);
    printf("\nsigned int:%u",ui);
    printf("\nlong int:%ld",li);
    printf("\nunsigned long int:%lu",uli);

    // -----------------------------
    // Sizes of each data type
    // -----------------------------
    printf("\nSizes of Data Types (in bytes):\n");
    printf("-------------------------------\n");
    printf("char: %zu\n", sizeof(c));
    printf("int: %zu\n", sizeof(li));
    printf("float: %zu\n", sizeof(f));
    printf("double: %zu\n", sizeof(d));
    printf("long double: %zu\n", sizeof(ld));
    printf("short int: %zu\n", sizeof(largePi));
    printf("long int: %zu\n", sizeof(li));


    return 0;
}

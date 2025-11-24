/*C program that demonstrates declaring a structure, creating variables of its type, assigning them values by hard-coding and via user
input and display them on the console.*/

#include <stdio.h>
#include <string.h>
//Declare a (cat)egory structure
struct cat
{
    char bk_name[25];
    char author[20];
    int edn;
    float price;
};

int main()
{
    //Declare variables of type cat
    struct cat book1, book2,*ptr_book;

    //Assign or hard-code the details of book1
    strcpy(book1.bk_name,"My First Book");
    strcpy(book1.author,"Author 1");
    book1.edn=1;
    book1.price=2500.5;
    ptr_book=&book1;

    //Display the details of book char16_t
    printf("\nBook1 details are:");
    printf("\nBook name: %s",book1.bk_name);
    printf("\nBook Author: %s",ptr_book->author);
    printf("\nBook Edition: %d",book1.edn);
    printf("\nBook Price: %.2f",ptr_book->price);

    //-----------------------------------------------------------------
    //Read in the values of book2 from the user
    //-----------------------------------------------------------------
    //Ask/prompt the user to input the detauks for book2
    printf("\nEnter the details for book2 below:");

    //Read in the book's name/title
    printf("\nPlease enter the name of the book\n");
    fgets(book2.author,sizeof(book2.bk_name),stdin);
    book2.bk_name[strcspn(book2.bk_name,"\n")]='\0';//Remove newline character

    //Read in the book's Edition
    printf("\nPlease enter the book\'s edition\n");
    scanf("%f",&book2.edn);

     //Read in the book's Edition
    printf("\nPlease enter the book\'s price\n");
    printf("%f",&book2.price);

     //Display the details of book char16_t
    printf("\nBook2 details are:");
    printf("\nBook name: %s",book2.bk_name);
    printf("\nBook Author: %s",book2.author);
    printf("\nBook Edition: %d",book2.edn);
    printf("\nBook Price: %.2f",book2.price);




    return 0;
}//NB:It's strongly recommended you use int main() rather than void main() or just main()

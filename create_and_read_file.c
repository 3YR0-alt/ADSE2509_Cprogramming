/*C program that demonstrates how to create, write and read from a file.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>>

//main functions begins program execution
int main()
{
    //variables to be used int he code
    int n;//looping variable

    /*Character array to hold the complete/full path to the file we'll be working with.*/
    char completePath[150]="";
    /*Character array to hold the file name and extension of the file we'll be working with.*/
    char fileName[20]="";
    /*Character array to hold the text to be entered/keyed-in by the user and then written to the file.*/
    char userMessage[100]="";

    //Prompt the user for the message/text to be written to the file
    printf("Please enter a message to be written to the file -> \n");
    fgets(userMessage,sizeof(userMessage),stdin);

    //Remove the trailing \n &replace it with \0
    userMessage[strcspn(userMessage,"\n")]='\0';

    //File pointer to the file to be written and read
    FILE*file2WriteRead;
    //Path to the location of the file
    strcat(completePath,"C:\\Users\\Administrator\\Documents\\adse_2509\\sem1\\02_cprogramming\\files\\");

    //Prompt the user for the name of the file to be created, written and read from
    printf("Please enter the name of the file to be created -> \n");
    fgets(fileName,sizeof(fileName),stdin);

    //Remove the trailing \n & replace it with \0
    fileName[strcspn(fileName,"\n")]='\0';

    //Join the path and the name of the file to be created
    strcat(completePath,fileName);
    //Add tje extension '.txt' to make the file a text file
    strcat(completePath,".txt");
    //Display the complete path to the user
    printf("\nThe path to the file to be created is:\n%s\n",completePath);

    //Create the file and open it in the append mode
    file2WriteRead=fopen(completePath,"a+");

    /*Create the file if it doesn't exist ,then write the user's message to it and then finally display its contents
    when the file pointer isn't null.*/

    if(file2WriteRead!=NULL)
    {
        //Inform the user that the file has been successfully created/located
        printf("The file \'%s\' has been successfully created or located.\n\n",fileName);
        //Write the user's message to the file
        printf("Writing to the file...\nPlease wait...\n");
        for(n=0; n<strlen(userMessage); n++)
        {
            fputc(userMessage[n],file2WriteRead);
        }
        //Add/append a new line to the end of the message
        fputc('\n',file2WriteRead);
    }






    return 0;
}

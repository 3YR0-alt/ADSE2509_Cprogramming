/*This is a C program that accepts students scores in an exam, calculates and displays the mean score and grade.*/
#include <stdio.h>

int main()
{
    //Variables to be used in the program
    unsigned short numOfStudents,numOfSubjects;
    unsigned short n,a;//looping variables

    //Prompt the user for the numbers of students and the subjects they partake in

    printf("Please enter the number of students in the class:\n");
    scanf("%hu",&numOfStudents);
    printf("Please enter the number of subjets the students are taking:\n");
    scanf("%hu",&numOfSubjects);

//singe dimension array to hold each students total,avg./mean and grade
    unsigned int total [numOfStudents];
    float mean [numOfStudents];
    char grade[numOfStudents];

//Two-dimensional array to hold the names of students, subjects and score per subject
    char studentNames[numOfStudents][20], subjectNames[numOfSubjects][15];
    char comment[numOfStudents][12];//stores a comment e.g "Excellent!","Good" etc.
    unsigned short studentScore[numOfStudents][numOfSubjects];//Stores each student's score per subject

    //Read in the student's names
    for(n=0; n<numOfStudents; n++)
    {
        printf("\nPlease enter the name of student %hu ->",n+1);
        scanf("%s",studentNames[n]);
    }

    //Read in the subject names
    for(n=0; n<numOfSubjects; n++)
    {
        printf("\nPlease enter the name of subject %hu ->",n+1);
        scanf("%s",subjectNames[n]);
    }

    //Read in each student's score per subject
    for (n=0; n<numOfStudents; n++)
    {
        //initialise each student's total score to 0 'zero'
        total[n]=0;
        for(a=0; a<numOfSubjects; a++)
        {
            //Temporary score variable
            unsigned short score;
            while(1)
            {
                //Prompt the user for the student's score
                printf("Please enter %s's score in %s (0-100) ->",studentNames[n],subjectNames[a]);
                if(scanf("%hu",&score)==1 && score <= 100)
                {
                    studentScore[n][a]=score;
                    total[n]+=studentScore[n][a];
                    break;
                }
                else
                {
                    printf("invalid score!\n Please enter a score between 0-100.\n");
                    while(getchar()!='\n');//Clear the input buffer
                }
            }


        }
        //Calculate each student's mean/avg. score
        mean[n]=total[n]/(float)numOfSubjects;

        //Get each student grade based on their mean score
        if (mean[n]>=70)
            grade[n] = 'A';
        else if(mean[n]>=60)
            grade[n]='B';
        else if(mean[n]>=50)
            grade[n]='C';
        else if(mean[n]>=40)
            grade[n]='D';
        else
            grade[n]='E';

       //input comment by using switch case
       switch (grade[n])
       {
           case 'A':
                sprintf(comment[n], "Awesome");
                break;
            case 'B':
                sprintf(comment[n], "Very Good");
                break;
            case 'C':
                sprintf(comment[n], "Good");
                break;
            case 'D':
                sprintf(comment[n], "Fair");
                break;
            case 'E':
                sprintf(comment[n], "Do better");
                break;
            default:
                sprintf(comment[n], "Try harder");
                break;
       }
        //TO DO:Assignment => use a switch case to assign the student a comment( finished )
        //hint:use a function from the <string.h> header file
    }//End of outer loop

    //display the results
    printf("\n%-12s","Student Name");
    for (a=0; a<numOfSubjects; a++)
        printf("%-12s ",subjectNames[a]);

    printf("%-8s %-8s %-8s","Total","Average","Fair","do better","try harder", "Grade");

    for (n=0; n<numOfStudents; n++)
    {
        printf("\n%-12s", studentNames[n]);
        for(a=0; a<numOfSubjects; a++)
        {
            printf("%-12hu",studentScore[n][a]);
        }
        printf("%-8u %-8.2f %-8c",total[n],mean[n],grade[n]);
    }



    return 0;
}

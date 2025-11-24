/* This is a C program that accepts students' scores in an exam,
   calculates and displays the mean score, grade, and comment. */

#include <stdio.h>
#include <string.h>

int main()
{
    // Variables
    unsigned short numOfStudents, numOfSubjects;
    unsigned short n, a; // looping variables

    // Prompt for number of students and subjects
    printf("Please enter the number of students in the class:\n");
    scanf("%hu", &numOfStudents);
    printf("Please enter the number of subjects the students are taking:\n");
    scanf("%hu", &numOfSubjects);

    // Arrays
    unsigned int total[numOfStudents];
    float mean[numOfStudents];
    char grade[numOfStudents];
    char comment[numOfStudents][15];
    char studentNames[numOfStudents][20];
    char subjectNames[numOfSubjects][15];
    unsigned short studentScore[numOfStudents][numOfSubjects];

    // Input student names
    for (n = 0; n < numOfStudents; n++)
    {
        printf("\nPlease enter the name of student %hu -> ", n + 1);
        scanf("%19s", studentNames[n]);
    }

    // Input subject names
    for (n = 0; n < numOfSubjects; n++)
    {
        printf("\nPlease enter the name of subject %hu -> ", n + 1);
        scanf("%14s", subjectNames[n]);
    }

    // Input scores
    for (n = 0; n < numOfStudents; n++)
    {
        total[n] = 0;

        for (a = 0; a < numOfSubjects; a++)
        {
            unsigned short score;

            while (1)
            {
                printf("Please enter %s's score in %s (0–100) -> ",
                       studentNames[n], subjectNames[a]);

                if (scanf("%hu", &score) == 1 && score <= 100)
                {
                    studentScore[n][a] = score;
                    total[n] += score;
                    break;
                }
                else
                {
                    printf("Invalid score! Please enter a score between 0 and 100.\n");
                    while (getchar() != '\n'); // clear invalid input
                }
            }
        }

        // Calculate mean
        mean[n] = total[n] / (float)numOfSubjects;

        // Assign grade
        if (mean[n] >= 70)
            grade[n] = 'A';
        else if (mean[n] >= 60)
            grade[n] = 'B';
        else if (mean[n] >= 50)
            grade[n] = 'C';
        else if (mean[n] >= 40)
            grade[n] = 'D';
        else
            grade[n] = 'E';

        // ✅ Assign comment using switch-case
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
    }

    // Display results
    printf("\n\n%-15s", "Student Name");
    for (a = 0; a < numOfSubjects; a++)
        printf("%-12s", subjectNames[a]);
    printf("%-8s %-10s %-8s %-12s\n", "Total", "Average", "Grade", "Comment");

    for (n = 0; n < numOfStudents; n++)
    {
        printf("%-15s", studentNames[n]);
        for (a = 0; a < numOfSubjects; a++)
            printf("%-12hu", studentScore[n][a]);
        printf("%-8u %-10.2f %-8c %-12s\n",
               total[n], mean[n], grade[n], comment[n]);
    }

    return 0;
}

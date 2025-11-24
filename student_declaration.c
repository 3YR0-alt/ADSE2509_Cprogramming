#include <stdio.h>
#include <string.h>

// Define the student structure
struct Student {
    char name[50];
    int age;
    char phone[10];
    float feepaid;
    char course[50];
};

int main() {
    // Create 2 student variables
    struct Student stud1, stud2;

    // Pre-set names
    strcpy(stud1.name,"Alexander");
    strcpy(stud2.name,"Zakaria");

    // Enter details for Alexander
    printf("Enter the details for Student number 1 (Alexander):\n");

    printf("\n-----------------------------------------------------------------");

    printf("\nAGE: ");
    scanf("%d", &stud1.age);

    printf("\n-----------------------------------------------------------------");

    printf("\nPhone: ");

    scanf("%s", stud1.phone);

    printf("\n-----------------------------------------------------------------");

    printf("\nFee Paid: ");
    scanf("%f", &stud1.feepaid);

    printf("\n-----------------------------------------------------------------");

    printf("\nCourse Taken: ");
    scanf("%s", stud1.course);

    printf("\n-----------------------------------------------------------------");

    // Enter details for Zakaria
    printf("\nEnter details for Student 2 (Zakaria):\n");

    printf("\n-----------------------------------------------------------------");

    printf("\nAGE: ");
    scanf("%d", &stud2.age);

    printf("\n-----------------------------------------------------------------");

    printf("\nFee Paid: ");
    scanf("%f", &stud2.feepaid);

    printf("\n-----------------------------------------------------------------");
-+
    printf("\nCourse taken: ");
    scanf("%s", stud2.course);

    printf("\n-----------------------------------------------------------------");


    // Display the results
    printf("\n----------------------- ALEXANDER: --------------------------");
    printf("Name: %s\n", stud1.name);
    printf("Age: %d\n", stud1.age);
    printf("Fee Paid: %.2f\n", stud1.feepaid);
    printf("Course: %s\n", stud1.course);

    printf("\n----------------------- ALEX -----------------------------");
    printf("Name: %s\n", stud2.name);
    printf("Age: %d\n", stud2.age);
    printf("Fee Paid: %.2f\n", stud2.feepaid);
    printf("Course: %s\n", stud2.course);

    return 0;
}

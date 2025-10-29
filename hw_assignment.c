#include <stdio.h>
#define pi 3.141

int main()
{
    double radius, area, circumference;
// Recieve the radius from the user
    printf("Input the radius of the circle: ");
    scanf("%f", &radius);
// Calculate the area and the circumference
    area = pi * radius * radius;
    circumference = 2 * pi * radius;

// Show the results
    printf("\nCircle Details:");
    printf("\nRadius: %.3lf", radius);
    printf("\nArea: %.3lf", area);
    printf("\nCircumference: %.3lf", circumference);

    return 0;
}

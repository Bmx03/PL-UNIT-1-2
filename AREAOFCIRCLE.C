// -------------------------------------------------------------------------------
// #Experiment 1 :  C program to calculate the area of a circle for a given radius
// -------------------------------------------------------------------------------

#include <stdio.h>

int main()
{
    float radius, area;
    const float PI = 3.14;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area of the circle = %.2f\n", area);

    return 0;
}

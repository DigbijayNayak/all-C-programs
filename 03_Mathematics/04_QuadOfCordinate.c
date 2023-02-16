// Find of Quadrant of given co-Ordinates
#include <stdio.h>
int main()
{
    float x, y;
    printf("Enter the value of x and y: ");
    scanf("%f %f", &x, &y);
    if (x > 0 && y > 0)
    {
        printf("Co-Ordinates (%f, %f) lies in First Quadrant.\n", x, y);
    }
    if (x < 0 && y > 0)
    {
        printf("Co-Ordinates (%f, %f) lies in Second Quadrant.\n", x, y);
    }
    if (x < 0 && y < 0)
    {
        printf("Co-Ordinates (%f, %f) lies in Third Quadrant.\n", x, y);
    }
    if (x > 0 && y < 0)
    {
        printf("Co-Ordinates (%f, %f) lies in Fourth Quadrant.\n", x, y);
    }
    if (x == 0 && y == 0)
    {
        printf("Co-Ordinates (%f, %f) lies at the origin.\n", x, y);
    }
}
// Roots of Quadratic Equations
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, root1, root2;
    float real, imaginery, discriminant;
    printf("Enter the value of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == 0 || b == 0 || c == 0)
    {
        printf("Error: Roots cannot be determined.\n");
    }
    else
    {
        discriminant = b * b - (4.0 * a * c);
        if (discriminant < 0)
        {
            printf("Imaginary Roots.\n");
            real = -b / (2.0 * a);
            imaginery = sqrt(abs(discriminant)) / (2.0 * a);
            printf("Root1 = %f + i %f.\n", real, imaginery);
            printf("Root2 = %f - i %f.\n", real, imaginery);
        }
        else if (discriminant == 0)
        {
            printf("Roots are real and equal.\n");
            root1 = -b / (2.0 * a);
            root2 = root1;
            printf("Root1 = %f.\n", root1);
            printf("Root2 = %f.\n", root2);
        }
        else if (discriminant > 0)
        {
            printf("Roots are real and distinct.\n");
            root1 = (-b + sqrt(discriminant)) / (2.0 * a);
            root2 = (-b - sqrt(discriminant)) / (2.0 * a);
            printf("Root1 = %f.\n", root1);
            printf("Root2 = %f.\n", root2);
        }
    }
    return 0;
}
// Areas of Triangle, Square, Circle, Rectangle, Parallelogram
#include <stdio.h>
#include <math.h>
int main()
{
    int choice;
    printf("Enter\n1. For Triangle\n2. For Square\n3. For Circle\n4. For Rectangle\n5. For Parallelogram\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        int a, b, c;
        float s, area;
        printf("Enter sides of triangle: \n");
        scanf("%d %d %d", &a, &b, &c);
        s = (float)(a + b + c) / 2;
        area = (float)(sqrt(s * (s - a) * (s - b) * (s - c)));
        printf("Area of Triangle with sides %d, %d, %d is %f.\n", a, b, c, area);
        break;
    }
    case 2:
    {
        float side, area;
        printf("Enter Sides of Square: \n");
        scanf("%f", &side);
        area = (float)side * side;
        printf("Area of Square is %f.\n", area);
        break;
    }
    case 3:
    {
        float radius, area;
        printf("Enter Radius of Circle: \n");
        scanf("%f", &radius);
        area = (float)3.14159 * radius * radius;
        printf("Area of Circle with radius %f is %f.\n", radius, area);
        break;
    }
    case 4:
    {
        float len, breadth, area;
        printf("Enter Length and Beadth of Rectangle: \n");
        scanf("%f %f", &len, &breadth);
        area = (float)len * breadth;
        printf("Area of Rectangle is %f.\n", area);
        break;
    }
    case 5:
    {
        float base, height, area;
        printf("Enter base and height of Parallelogram: \n");
        scanf("%f %f", &base, &height);
        area = (float)base * height;
        printf("Enter area of Parallelogram is %f.\n", area);
        break;
    }

    default:
    {
        printf("Invalid Choice.\n");
        break;
    }
    }
}
// Print Sine value mathematically
#include <stdio.h>
#include <math.h>
int factorial(int);
int main()
{
    // sinx = x1/1! - x3/3! + x5/5! - x7/7! ...
    int accuracy, count = 0, k = 1;
    float x, temp, sine = 0;
    printf("Enter value x (in degree) to find sin x value: \n");
    scanf("%f", &x);
    temp = x;
    //Degree to Radius
    x = (float)x * (3.14159 / 180);
    printf("Enter value to get more accurate \n 3 for least and more for more accuracy: \n");
    scanf("%d", &accuracy);

    do
    {
        if (count % 2 == 0)
        {
            sine = (float)sine + (pow(x, k) / factorial(k));
        }
        if (count % 2 == 1)
        {
            sine = (float)sine - (pow(x, k) / factorial(k));
        }
        count++;
        k = k + 2;
    } while (count <= accuracy);

    printf("Sine(%f) = %f calculated mathematically: \n", temp, sine);
    printf("Sine(%f) = %f calculated using library function\n", temp, sin(x));
}
int factorial(int val)
{
    int factorial = 1, i;
    for (i = 1; i <= val; i++)
    {
        factorial = factorial * i;
    }
    return (factorial);
}
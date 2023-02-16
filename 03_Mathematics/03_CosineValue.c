// Print Cosine value Mathematically
#include <stdio.h>
#include <math.h>
int factorial(int);
int main()
{
    // cos(x) = 1 - x2/2! + x4/4! - x6/6!....
    int accuracy, count = 0, k = 0;
    float x, temp, cosine = -0;
    printf("Enter the value of x in degree: ");
    scanf("%f", &x);
    temp = x;
    x = (float)x * (3.14159 / 180);
    printf("Enter the accuracy: ");
    scanf("%d", &accuracy);
    do
    {
        if (count % 2 == 0)
        {
            cosine = cosine + (pow(x, k) / factorial(k));
        }
        if (count % 2 == 1)
        {
            cosine = cosine - (pow(x, k) / factorial(k));
        }
        count++;
        k = k + 2;
    } while (count <= accuracy);
    printf("cos(%f) = %f calculated mathematically.\n", temp, cosine);
    printf("cos(%f) = %f calculated using library function.\n", temp, cos(x));
}
int factorial(int m)
{
    int fact = 1;
    for (int i = 1; i <= m; i++)
    {
        fact = fact * i;
    }
    return fact;
}
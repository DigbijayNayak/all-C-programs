// To Swap two numbers without using 3rd variables
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the two value a and b: \n");
    scanf("%d %d", &a, &b);
    printf("Before\na = %d\nb = %d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n\nAfter\na = %d\nb = %d", a, b);
}
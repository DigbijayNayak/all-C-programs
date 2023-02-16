//To Swap two numbers using 3rd Variables
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the two value a and b: \n");
    scanf("%d %d", &a, &b);
    printf("\nBefore\na = %d\nb = %d", a, b);
    c = a;
    a = b;
    b = c;
    printf("\n\nAfter\na = %d\nb = %d", a, b);
}
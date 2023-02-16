//Fibonacci Series
#include <stdio.h>
int main()
{
    int a = 0, b = 1, num, c, count;
    printf("Enter  a numbe to obtain fibonacci series: ");
    scanf("%d", &num);
    printf("The Series is\n");
    printf("%d \n%d\n", a, b);
    count = 2;
    while (count < num)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d\n", c);
        count++;
    }
}
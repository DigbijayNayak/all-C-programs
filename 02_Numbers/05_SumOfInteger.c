//Sum of integer divisible by 2 between two numbers
#include <stdio.h>
int main()
{
    int i, sum = 0, num1, num2;
    printf("Enter Number1\n");
    scanf("%d", &num1);
    printf("Enter Number2\n");
    scanf("%d", &num2);
    for (i = num1; i <= num2; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("The sum of all integers divisible by 2 between %d and %d is %d.\n", num1, num2, sum);
}
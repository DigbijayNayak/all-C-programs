// Sum of all digits in a number
#include <stdio.h>
int main()
{
    int num, rem, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    printf("The sum of all digits of given number is %d.", sum);
}
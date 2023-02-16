// Maximum Prime Numbers below given number.
#include <stdio.h>
int main()
{
    int num, i, count = 0, j, maxPrime = 1;
    printf("Enter a number: \n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        count = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            if (maxPrime < i)
            {
                maxPrime = i;
            }
        }
    }
    printf("Maximum Prime number below %d is %d.\n", num, maxPrime);
}
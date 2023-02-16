// To know wether given number is Prime or Not
#include <stdio.h>
int main()
{
    int num, i, count = 0;
    printf("Enter a number to check whether it is Prime or not\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("The given number %d is Prime number.\n", num);
    }
    else
    {
        printf("The given number %d is not Prime number\n because The number is divisible by\n", num);
        for (i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                printf("%d\n", i);
            }
        }
    }
}
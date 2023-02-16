// Perfect numbers between 1 and given number
#include <stdio.h>
int main()
{
    int num, sum;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            printf("%d  ", i);
        }
    }
}
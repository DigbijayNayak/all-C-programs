// Check whether there are repeated frequency in given Number.
#include <stdio.h>
int main()
{
    int num, temp, i, frequency[10], rem, flag = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;
    for (i = 0; i < 10; i++)
    {
        frequency[i] = 0;
    }
    while (num > 0)
    {
        rem = num % 10;
        frequency[rem] += 1;
        num /= 10;
    }
    for (i = 0; i < 10; i++)
    {
        if (frequency[i] > 1)
        {
            flag = 1;
            printf("%d --->repeated %d times.\n", i, frequency[i]);
        }
    }
    if (flag == 0)
    {
        printf("No Repeated Digits\n");
    }
    else
    {
        printf("Repeated digits are there.\n");
    }
}
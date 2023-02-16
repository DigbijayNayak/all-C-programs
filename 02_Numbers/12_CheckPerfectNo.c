//Check Whether number is Perfect number or not
#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        printf("The given number %d is perfect.\n", num);
    }
    else
    {
        printf("The given number %d is not perfect.", num);
    }
}
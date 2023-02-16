//Find N strong Numbers
#include <stdio.h>
#include <math.h>
int GetFactorial(int number);
int main()
{
    int num, i, j, temp1, temp2, sum = 0;
    printf("Enter a number to know all strong numbers between them: \n");
    scanf("%d", &num);
    printf("Strong numbers are: \n");
    for (i = 1; i <= num; i++)
    {
        sum = 0;
        temp1 = i;
        temp2 = i;
        while (temp1 > 0)
        {
            j = temp1 % 10;
            sum += GetFactorial(j);
            temp1 /= 10;
        }
        if (sum == temp2)
        {
            printf("%d\n", sum);
        }
    }
}
int GetFactorial(int number)
{
    int factorial = 1, i;
    for (i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
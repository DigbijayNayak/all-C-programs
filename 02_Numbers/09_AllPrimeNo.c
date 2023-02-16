//All Prime Numbers till N
#include <stdio.h>
int main()
{
    int num, i, j, count;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The Prime numbers upto %d are\n", num);
    for (i = 1; i <= num; i++)
    {
        count = 0;
        for (j = 1; j <= num; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d  ", i);
        }
    }
}
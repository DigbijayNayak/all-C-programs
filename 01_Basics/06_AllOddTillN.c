#include <stdio.h>
int main()
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d  ", i);
        }
    }
}
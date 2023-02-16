//Check whether number is Armstrong number or not
#include <stdio.h>
int main()
{
    int num, temp, rem, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        sum += rem * rem * rem;
        num /= 10;
    }
    if (temp == sum)
    {
        printf("Armstrong Number.");
    }
    else
    {
        printf("Not an Armstrong Number.");
    }
    return 0;
}
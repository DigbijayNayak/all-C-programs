// To print the reverse of a given numbe
#include <stdio.h>
int main()
{
    int num, rem, rev = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    printf("The reverse of number is %d.", rev);
}
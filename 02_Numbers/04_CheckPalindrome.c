//To find whether given number is palindrome or not.
#include <stdio.h>
int main()
{
    int num, temp, rem, rev = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    if (temp == rev)
    {
        printf("The given number %d is a palindrome number.\n", temp);
    }
    else
    {
        printf("The given number %d is not a palindrome number.", temp);
    }
}
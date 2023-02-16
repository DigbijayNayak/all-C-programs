//To Convert given days to years, week and days
#include <stdio.h>
int main()
{
    int nodays, years, weeks, days;
    printf("Enter the total days:\n");
    scanf("%d", &nodays);
    years = nodays / 365;
    weeks = (nodays % 365) / 7;
    days = (nodays % 365) % 7;
    printf("%d = %d years, %d weeks, %d days\n", nodays, years, weeks, days);
}
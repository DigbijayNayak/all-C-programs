// Calculator
#include <stdio.h>
#include <math.h>
int main()
{
    float num1, num2, result;
    int flag = 1;
    char choice;
    printf("Enter your choice +, -, /, * for calculation: ");
    scanf("%c", &choice);
    printf("Enter number 1: ");
    scanf("%f", &num1);
    printf("Enter number 2: ");
    scanf("%f", &num2);
    switch (choice)
    {
    case '+':
    {
        result = num1 + num2;
        break;
    }
    case '-':
    {
        result = num1 - num2;
        break;
    }
    case '/':
    {
        if (num2 == 0)
        {
            flag = 0;
        }
        else
        {
            result = num1 / num2;
        }
        break;
    }
    case '*':
    {
        result = num1 * num2;
        break;
    }
    default:
        printf("Error.");
        break;
    }
    if (flag == 1)
    {
        printf("%f %c %f = %f", num1, choice, num2, result);
    }
    else
    {
        printf("%f %c %f = undefined.\n", num1, choice, num2);
    }
}
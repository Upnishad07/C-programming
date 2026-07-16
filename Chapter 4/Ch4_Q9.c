/* Q- . Write a program to check whether a given number is prime or not using loops. */
#include <stdio.h>
int main()
{
    int a, b, c = 1;
    printf("Provide the number you waana check\n");
    scanf("%d", &a);
    if (a <= 1)
    {
        c = 0;
    }
    else if (a > 1)
    {
        for (b = 2; b < a; b++)
        {
            if (a % b == 0)
            {
                c = 0;
                break;
            }
        }
    }
    if (c == 0)
    {
        printf("Its not a prime number");
    }
    else
    {
        printf("Its a prime number");
    }
}

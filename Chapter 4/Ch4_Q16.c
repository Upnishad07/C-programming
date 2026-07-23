/* Q- Take a number and print all its divisors, then separately state whether it's prime. */

#include <stdio.h>
int main()
{
    int a, b = 1, c = 1;
    printf("Enter the number\n");
    scanf("%d", &a);
    for (int b = 1; b <= a; b++)
    {
        if (a % b == 0)
        {
            printf("%d\n", b);
        }
    }
    if (a <= 1)
    {
        c = 0;
    }
    if (a > 1)
    {
        for (int d = 2; d < a; d++)
        {
            if (a % d == 0)
            {
                c = 0;
            }
        }
        if (c == 1)
        {
            printf("It's a prime number");
        }
        else
        {
            printf("It's not a prime number");
        }
    }

    return 0;
}

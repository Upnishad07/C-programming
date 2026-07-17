#include <stdio.h>
int main()
{
    int a, b;
    printf("Provide the number you waana check\n");
    scanf("%d", &a);
    if (a <= 1)
    {
        printf("Its not a prime number");
        goto x;
    }
    else
    {
        for (b = 2; b < a; b++)
        {
            if (a % b == 0)
            {
                printf("Its not a prime number");
                goto x;
            }
        }
    }
    printf("Its a prime number");
x:

    return 0;
}
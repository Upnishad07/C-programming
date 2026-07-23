/* Q- Take a number and count how many prime numbers exist between 1 and that number. */

#include <stdio.h>
int main()
{
    int a, z = 1, b = 2, i = 1, y = 0;
    printf("Enter the number\n");
    scanf("%d", &a);
    while (z < a - 1)
    {
        for (int i = 2; i < b; i++)
        {
            if (b % i == 0)
            {
                break;
            }
            else if (b % i != 0 && i < b - 1)
            {
                continue;
            }
            else
            {
                y++;
            }
        }
        b++;
        z++;
    }
    if (a > 2)
    {
        y++;
    }
    printf("%d", y);
    return 0;
}

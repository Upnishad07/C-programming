/* Alternate approach of Q15*/
#include <stdio.h>
int main()
{
    int a, z = 1, b = 2, i = 2, y = 1, v = 0;
    printf("Enter the number\n");
    scanf("%d", &a);
    while (z < a - 1)
    {
        for (i = 2; i < b; i++)
        {
            y = 1;
            if (b % i == 0)
            {
                y = 0;
                break;
            }
        }
        if (y == 1)
        {
            v++;
        }
        b++;
        z++;
    }
    printf("%d", v);
    return 0;
}

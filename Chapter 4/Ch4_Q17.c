/* Q- Print a multiplication table, but skip printing the line if the result is an odd number. */

#include <stdio.h>
int main()
{
    int a, z;
    printf("Enter the number\n");
    scanf("%d", &a);
    for (int i = 1; i <= 10; i++)
    {
        z = a * i;
        if (z % 2 == 0)
        {
            printf("%d x %d = %d\n", a, i, z);
        }
    }

    return 0;
}

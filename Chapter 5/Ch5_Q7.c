/* Q- Write a function to print a rectangle of * (n rows, m columns)
 * * * * *
 * * * * *
 * * * * *                    */

#include <stdio.h>
int reactangel(int a, int b)
{
    int i;
    int z;
    for (i = 0; i < a; i++)
    {
        for (z = 0; z < b; z++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

int main()
{
    int a, b;
    printf("Enter the value of Lenght and breadth\n");
    scanf("%d", &a);
    scanf("%d", &b);
    reactangel(a, b);

    return 0;
}
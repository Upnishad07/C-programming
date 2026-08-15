/* Q- Write a program using function to print the following pattern (first n lines)
 *
 * * *
 * * * * *                          */

#include <stdio.h>
int print(int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = (2 * i) + 1;
        for (int z = 0; z < count; z++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

int main()
{
    int a;
    printf("Tell the value of n\n");
    scanf("%d", &a);
    print(a);
    return 0;
}

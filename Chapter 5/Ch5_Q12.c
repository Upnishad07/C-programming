/* Q- Write a function to print a diamond shape:

    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *                                 */

#include <stdio.h>

void diamond(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int m = 1; m <= (n - i); m++)
        {
            printf(" ");
        }
        for (int z = 1; z <= i; z++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int b = n - 1; b > 0; b--)
    {
        for (int v = n - b; v > 0; v--)
        {
            printf(" ");
        }
        for (int c = b; c > 0; c--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int a;
    printf("Tell the value of the middle row\n");
    scanf("%d", &a);
    diamond(a);
    return 0;
}

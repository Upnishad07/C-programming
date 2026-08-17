/* Q- Write a function to print numbers in a pattern:

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5          */

#include <stdio.h>

void pattern(int lines)
{
    for (int i = 1; i <= lines; i++)
    {
        for (int z = 1; z <= i; z++)
        {
            printf("%d ", z);
        }
        printf("\n");
    }
}

int main()
{
    int a;
    printf("Enter the value of number till which you wanna print\n");
    scanf("%d", &a);
    pattern(a);
    return 0;
}

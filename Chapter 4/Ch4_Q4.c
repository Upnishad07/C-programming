#include <stdio.h>
int main()
{
    int a, b, i = 1;
    printf("Tell a number till you want sum\n");
    scanf("%d", &a);
    for (b = 2; b <= a; b++)
    {

        i += b;
    }
    printf("%d", i);

    return 0;
}
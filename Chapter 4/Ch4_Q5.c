/* Q-Write a program to implement program 3 using ‘do-while’ loop. */
#include <stdio.h>
int main()
{
    int a, b = 1, i = 1;
    printf("Tell a number till you want sum\n");
    scanf("%d", &a);
    do
    {
        b++;
        i += b;

    } while (b < a);
    printf("%d", i);

    return 0;
}
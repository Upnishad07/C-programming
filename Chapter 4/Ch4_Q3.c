/* Q- Write a program to sum first n natural numbers using while loop. */

#include <stdio.h>
int main()
{
    int a, b = 1, i = 1;
    printf("Tell a number till you want sum\n");
    scanf("%d", &a);
    while (b < a)
    {
        b++;
        i += b;
       
    }
    printf("%d", i);

    return 0;
}
/* Q- Write a program to print multiplication table of a given number n. */

#include <stdio.h>
int main()
{
    int i, a = 1;
    printf("Tell the number you wanna Multiplicable table\n");
    scanf("%d", &i);
    while (a <= 10)
    {
        printf("%d x %d = %d\n", i, a, i * a);
        a++;
    }

    return 0;
}

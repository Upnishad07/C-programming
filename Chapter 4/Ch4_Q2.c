/* Q- Write a program to print multiplication table of 10 in reversed order */

#include <stdio.h>
int main()
{
    int i = 10, a;
    for (a = 10; a; a--)
    {
       printf("%d x %d = %d\n", i, a, i*a);
    }
    

    return 0;
}

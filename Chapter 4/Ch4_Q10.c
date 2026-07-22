/* Q- Print all even numbers between 1 and 50 using a for loop. */

#include <stdio.h>
int main()
{
    int a;
    for (int a = 1; a <= 50; a++)
    {
        a % 2; 
        if (a%2 == 0)
        {
            printf("%d\n", a);
        }
    }

    return 0;
}

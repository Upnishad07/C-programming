/* Q- Print the Fibonacci series up to n terms (0, 1, 1, 2, 3, 5, 8...) using a loop. */

#include <stdio.h>
int main()
{
    int  first=0, second=1, i, z=3, next;
    printf("Enter the value of nth term\n");
    scanf("%d", &i);
    printf("%d\n%d\n", first, second);
    while(z <=i)
    {
        next = first + second;
        printf("%d\n", next);
        first = second;
        second = next;
        z++;
    }

    return 0;
}

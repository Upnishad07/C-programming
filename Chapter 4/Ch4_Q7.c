/* Q- Write a program to calculate the factorial of a given number using a for loop. */
#include <stdio.h>
int main()
{
    int a, b, ans;
    printf("Provide the number\n");
    scanf("%d", &a);
    ans = a;
    for (b = ans - 1; b; b--)
    {
        ans = (ans * b);
    }
    printf("The value is %d", ans);
    return 0;
}

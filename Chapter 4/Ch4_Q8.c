/* Q- Repeat Q7 using while loop.*/

#include <stdio.h>
int main()
{
    int a, b, ans;
    printf("Provide the number\n");
    scanf("%d", &a);
    ans = a;
    b = ans - 1;
    while (b > 0)
    {
        ans = ans * b;
        b--;
    }

    printf("The value is %d", ans);

    return 0;
}

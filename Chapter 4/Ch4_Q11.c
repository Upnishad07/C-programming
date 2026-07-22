/* Q-Take a number and print the sum of its digits */

#include <stdio.h>
int main()
{
    int a, sum = 0, z, c;
    printf("Enter the number\n");
    scanf("%d", &a);
    while (a > 0)
    {
        c = a % 10;
        sum += c;
        z = a / 10;
        a = z;
    }
    printf("%d", sum);
    return 0;
}
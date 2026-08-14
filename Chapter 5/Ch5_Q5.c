/* Q-  Write a recursive function to calculate the sum of first ‘n’ natural numbers. */

#include <stdio.h>
int sum(int n)
{
    if (n > 0)
    {
        int total = n + sum(n - 1);
        return total;
    }
}
int main()
{
    int a;
    printf("Enter the value of n\n");
    scanf("%d", &a);
    int z = sum(a);
    printf("The sum is %d", z);
    return 0;
}

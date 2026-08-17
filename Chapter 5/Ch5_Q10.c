/* Q- Write a recursive function to calculate x^n (x to the power n). */

#include <stdio.h>
int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }

    if (b >= 1)
    {
        return a * power(a, b - 1);
        
    }
}

int main()
{
    int a, b;
    printf("Enter the number and the power you wanna calculate\n");
    scanf("%d", &a);
    scanf("%d", &b);
    int c = power(a,b);
    printf("%d", c);
    return 0;
}

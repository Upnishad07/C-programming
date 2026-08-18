/* Q- Write a recursive function that prints numbers from n to 1 (without loops). */

#include <stdio.h>
void number(int n)
{
    
    if (n > 0)
    {
        printf("%d ", n);
        number(n - 1);
    }
}
int main()
{
    int a;
    printf("Enter the value of n\n");
    scanf("%d", &a);
    number(a);
    return 0;
}

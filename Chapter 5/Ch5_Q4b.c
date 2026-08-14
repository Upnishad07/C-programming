/* Q- Write a program using recursion to calculate nth element of Fibonacci series. */
#include <stdio.h>
int first = 0;
int second = 1;

int febo(int i)
{
    int result = first + second;
    first = second;
    second = result;
    if ( i > 2 )
    {
        printf("%d\n", result);
        febo(i-1);
    }
}
int main()
{
    int n;
    printf("Enter the value of nth term\n");
    scanf("%d", &n);
    printf("The series is --\n");
    if (n >= 1)
    {
        printf("0\n");
    }
    if (n >= 2)
    {
        printf("1\n");
    }
    febo(n);
    return 0;
}

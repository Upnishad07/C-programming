/* Q- Write a program using function to calculate nth element of Fibonacci series. */

#include <stdio.h>
int fibo(int n_term)
{
    printf("The series is --\n");
    if (n_term >= 1)
    {
        printf("0\n");
    }
    if (n_term >= 2)
    {
        printf("1\n");
    }
    int first = 0, second = 1;
    for (int i = 0; i < n_term - 2; i++)
    {
        int result = first + second;
        printf("%d\n", result);
        first = second;
        second = result;
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter the value of nth term\n");
    scanf("%d", &n);
    fibo(n);
    return 0;
}

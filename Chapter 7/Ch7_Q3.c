/* Q- Write a program using a function which calculates the sum and average of two numbers.
      Use pointers and print the values of sum and average in main(). */

#include <stdio.h>
int fun(int *a, int *b)
{
    return (*a + *b);
}

int fun2(int *a, int *b)
{
    return ((*a + *b)/2);
} 

int main()
{
    int a, b;
    printf("Enter the numbers\n");
    scanf("%d%d", &a, &b);
    int j = fun(&a, &b);
    int k = fun2(&a, &b);
    printf("The sum is %d\nAnd the average is %d", j, k);
    return 0;
}
/* Q-  Write a program containing functions which counts the number of positive integers in an array. */

#include <stdio.h>
int fun(int a[10])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        if ( a[i] > 0)
        {
            sum += 1;
        }
        
    }
    return sum;
    
}
int main()
{
    int a[10];
    printf("Enter the values\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    int c = fun(a);
    printf("The total count of positive numbers are %d", c);
    
    return 0;
}
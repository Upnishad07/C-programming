/* Q- Write a program to:
      Create an array of 10 numbers (user input)
      Count how many numbers are even
      Count how many numbers are odd
      Print the counts */

#include <stdio.h>
int main()
{
    int a[10];
    printf("Enter the values\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    int even_score = 0;
    int odd_score = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            even_score++;
        }
        if (a[i] % 2 != 0)
        {
            odd_score++;
        }
    }
    printf("The number of even numbers are %d\n", even_score);
    printf("The number of odd numbers are %d\n", odd_score);

    return 0;
}

/* Q- Write a program to:
      --Create an array of 5 integers
      --Take 5 numbers as input from the user
      --Print all the numbers in reverse order */

#include <stdio.h>
int main()
{
    int a[5];
    printf("Enter the numbers\n");
    int i = 0;
    for (; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d\n", a[j]);
    }
    return 0;
}

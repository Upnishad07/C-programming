/* Q- Write a program that:
      Creates a 2D array: int matrix[3][3]
      Uses a pointer to traverse and print all elements
      Calculate and print the sum of all elements. */

#include <stdio.h>
int main()
{
    int a[3][3];
    int *j = &a[0][0];
    printf("Enter the values of matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value of element %d, %d --  ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix you provide is --\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        sum += *(j + i);
    }
    printf("And the sum of all the element is %d", sum);

    return 0;
}
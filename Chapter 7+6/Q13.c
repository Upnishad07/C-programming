/* Q- Write a program that:
      Creates a 2D array (3×3) and populate it
      Use pointers only to read from the original matrix
      Transpose the matrix (rows become columns) using pointer arithmetic
      Store the transposed result in a new 2D array using pointers
      Print both original and transposed matrices */

// Don't know 2D array ,uch yet.

#include <stdio.h>
int main()
{
    int a[3][3];
    printf("Enter the values of elements of the matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value of elemant at %d, %d --  ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int *j = &a[0][0];
    printf("Your provided matrics is --\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    int temp = *(j + 3);
    *(j + 3) = *(j + 1);
    *(j + 1) = temp;

    int temp2 = *(j + 6);
    *(j + 6) = *(j + 2);
    *(j + 2) = temp2;

    int temp3 = *(j + 7);
    *(j + 7) = *(j + 5);
    *(j + 5) = temp3;

    int b[3][3];
    int *c = &b[0][0];
    for (int i = 0; i < 9; i++)
    {
        *(c + i) = *(j + i);
    }
    char arr[] = "The transpose of this matrix is --";
    puts(arr);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
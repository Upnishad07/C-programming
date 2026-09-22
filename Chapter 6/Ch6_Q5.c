/* Q- Write a program to:
      Create a 4×3 2D array
      Store the multiplication tables of 2, 3, 4, 5 in it (first 3 multiples each)
      Print the entire 2D array in a formatted way */

#include <stdio.h>
int main()
{
    int a[4][3];
    int z = 2;

    for (int i = 0; i < 4; i++)
    {
        int k = 1;
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = (z * k);
            k++;
        }
        z++;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d   ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

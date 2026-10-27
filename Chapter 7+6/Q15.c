#include <stdio.h>
int main()
{
    int a[4][3];
    printf("Enter values\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int z = 0;
    int (*b[2][2])[3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            b[i][j] = &a[z];
            z++;
        }
    }
    int *j;
    for (int i = 0; i < 2; i++)
    {
        for (int k = 0; k < 2; k++)
        {
            j = (int *)b[i][k];
            for (int i = 0; i < 3; i++)
            {
                printf("%d  ", *(j + i));
            }
            printf("\n");
        }
    }

    return 0;
}
/* Q- Write a function void reverseArray(int arr[], int n) that reverses an array in-place using pointers. */

#include <stdio.h>
void reverseArray(int arr[], int k)
{
    int *j = arr;
    int *z = (arr + (k - 1));
    int n;

    for (int i = 0; i < k / 2; i++)
    {
        n = *(j + i);
        *(j + i) = *(z - i);
        *(z - i) = n;
    }

    for (int m = 0; m < 7; m++)
    {
        printf("%d\n", *(j + m));
    }
}

int main()
{
    int a[7];
    printf("Enter the values\n");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");
    int array_size = 7;
    reverseArray(a, array_size);
    return 0;
}

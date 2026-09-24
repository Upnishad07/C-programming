/* Q- Write a function void reverseArray(int arr[], int n) that reverses an array in-place using pointers. */

#include <stdio.h>

void reverseArray(int arr[])
{
    int *j = arr;
    int *z = (arr + 7);
    int n;
    for (int i = 0; i < 4; i++)
    {
        n = *(j + i);
        *(j + i) = *(z - i);
        *(z - i) = n;
    }
    for (int m = 0; m < 8; m++)
    {
        printf("%d\n", *(j + m));
    }
}
int main()
{
    int a[8];
    printf("Enter the values\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");
    reverseArray(a);
    return 0;
}
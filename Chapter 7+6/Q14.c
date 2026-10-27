/* Q- Write a program that:
      Recursively sorts (array in assanding order) an array (using pointers for swapping)
      Finds the median of the sorted array using recursion
      Calculates sum, average, and standard deviation (all recursive)
      Pass everything by reference using pointers. */

#include <stdio.h>
int sort(int *n, int l)
{
    if (*(n) > *(n + 1))
    {
        int temp = *(n);
        *(n) = *(n + 1);
        *(n + 1) = temp;
    }
    sort((n + 1), l);
}
int main()
{
    int l;
    printf("Whats the counting of total elemants\n");
    scanf("%d", &l);
    int arr[l];
    printf("Enter the elements\n");
    for (int i = 0; i < l; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, l);
    for (int i = 0; i < l; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}
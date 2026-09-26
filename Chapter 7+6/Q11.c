/* Q- Write a function void rotateArray(int arr[], int n, int k) that rotates an array by k positions to the RIGHT using
    pointers.
      Constraints:
      Must use pointer arithmetic to traverse and manipulate
      Rotate RIGHT means: last k elements move to front
      Handle case where k > n (use modulo) */

#include <stdio.h>

void rotateArray(int arr[], int n, int k)
{
    int *j = arr;
    int temp[k];
    if (k <= n)
    {
        for (int i = 0; i < k; i++)
    {
        temp[i] = *(j + n - (k - i));
    }
    for (int i = 0; i <= (n - k); i++)
    {
        *(j + (n - k) + k - i) = *(j + (n - k) - i);
    }
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    }
    
    if (k > n)
    {
        printf("Error: Your K value is exciding the total element\n");
    }
    
}
int main()
{
    int a[7];
    int array_size = 7, k;
    printf("Enter the values of elements\n");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the value of K (The position from the last till which swap start)\n");
    scanf("%d", &k);
    rotateArray(a, array_size, k);
    return 0;
}

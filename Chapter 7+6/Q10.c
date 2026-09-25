/* Q- Write a recursive function int recursiveSum(int arr[], int n) that:
      Takes an array and its size
      Returns the sum of all array elements using recursion
      Use the base case: if n == 0, return 0 */

#include <stdio.h>

int recursiveSum(int arr[], int n)
{
    int *j = (arr + (n-1));
    int sum = 0;
    if (n < 1)
    {
        return 0;
    }

    sum += *(j) + recursiveSum(arr, (n - 1));
    return sum;
}
int main()
{
    int a[8];
    int array_size = 8;
    printf("Enter the values\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The total sum is %d", recursiveSum(a, array_size));

    return 0;
}
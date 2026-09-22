/* Q- Write a function int sumArray(int arr[], int n) that takes an array and its size as parameters and returns 
      the sum of all elements.
    */

#include <stdio.h>

int sumArry( int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < 8; i++)
    {
        sum += arr[i];
    }
    printf("The sum is %d and the size of the array is %d bits", sum, n);
    return 0;
}
int main()
{
    int a[8];
    printf("Enter the values\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
    }
    int x = sizeof(a);
    sumArry(a, x);
    return 0;
}
/* Q- Write a function int countPositive(int arr[], int n) that counts how many positive numbers are in the array 
      and returns the count. */

#include <stdio.h>

int countPositive(int arr[], int n)
{
    int z = 0;
    for (int i = 0; i < n; i++)
    {
        if ( arr[i] > 0 )
        {
            z += 1;
        }
        
    }
    return z;
   
}
int main()
{
    int c[8];
    printf("Enter the values\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &c[i]);
    }
    int array_size = 8;
    printf("The total positive numbers are %d", countPositive(c, array_size) );
    return 0;
}
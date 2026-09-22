/* Q- Write a program to:
      Create an array of 6 numbers
      Find the largest number
      Find the smallest number
      Print both with their positions (indices)  */

#include <stdio.h>
int main()
{
    int a[6];
    printf("Enter the value of numbers\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }
    int greatest = a[0];
    int index = 0;
    int smallest = a[0];
    int andex = 0;
    for (int i = 1; i < 6; i++)
    {
        if (a[i] > greatest)
        {
            greatest = a[i];
            index = i;
        }
        if (a[i] < smallest)
        {
            smallest = a[i];
            andex = i;
        }
    }
    printf("The smallest is %d (at index %d)", smallest, index);
    printf("The greatest is %d (at index %d)", greatest, andex);
    return 0;
}

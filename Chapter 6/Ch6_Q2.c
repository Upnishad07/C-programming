/* Q- Write a program to:
      Create an array of 8 numbers (can be hardcoded)
      Calculate the sum of all elements
      Calculate the average
      Print both sum and average */
#include <stdio.h>
int main()
{
    float a[8];
    printf("Enter the numbers\n");
    float sum = 0;
    float average = 0;
    for (int i = 0; i < 8; i++)
    {
        scanf("%f", &a[i]);
        sum += a[i];
    }
    average = (sum) / 8;
    printf("The value of sum and average is %.2f and %.2f", sum, average);
    return 0;
}

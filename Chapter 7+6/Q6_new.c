/* Q- Write a program that declares an array int numbers[5] = {10, 20, 30, 40, 50} and:
      Create a pointer pointing to the first element
      Use pointer arithmetic to print all elements. */

#include <stdio.h>
int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int *p = numbers;
    for (int i = 0; i < 5; i++)
    {
        printf("The value at position %d is %d\n", i, *(p + i));
    }

    return 0;
}
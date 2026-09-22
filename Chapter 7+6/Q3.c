/* Q- Write a function called 'swap()' that:
1. Takes two integer pointers as parameters
2. Swaps the values of the two variables they point to
3. In main(), declare two integers a=5, b=10
4. Call swap by passing their addresses
5. Print the values to verify they are swapped
    */

#include <stdio.h>

int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = *x;
    *y = temp;
    return 0;
}

int main()
{
    int a = 5, b = 10;
    printf("The values of a and b are %d, %d till now\n", a, b);
    swap(&a, &b);
    printf("Now the values are %d, %d", a, b);
    return 0;
}
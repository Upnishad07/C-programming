/* Q- Write a program that:
1. Declares an integer array of size 5
2. Initialize it with values: 10, 20, 30, 40, 50
3. Access and print all elements using:
   a. Array index notation (arr[i])
   b. Pointer arithmetic (using a pointer ptr)
    */

#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    printf("Using array index notation\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    int *ptr = a;
    printf("Using pointer arithmetic\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *(ptr + i));
    }
    
    return 0;
}
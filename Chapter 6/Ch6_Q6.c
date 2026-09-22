/* Q- Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where 
ptr is a pointer pointing to the first element of the array. */

#include <stdio.h>
int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = a;
    printf("The value of third element is %d\nAnd the first element is %d\n", *(ptr +2), *ptr);
    printf("The address of third element is %d\nAnd the first element is %d\n", (ptr +2), ptr);

    return 0;
}
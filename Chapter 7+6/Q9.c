/* Q- Write a program that:
      Declares an array of 5 integers
      Uses a pointer ptr pointing to the first element
      Uses a pointer-to-pointer ptr2ptr to store the address of ptr
      Find and print the maximum element using ptr2ptr
      Challenge: Access array elements using **ptr2ptr + i */

#include <stdio.h>
int main()
{
    int a[5];
    printf("Enter five numbers\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int *ptr = a;
    int **ptr2ptr = &ptr;
    int greatest = **ptr2ptr;
    for (int i = 0; i < 5; i++)
    {
        if (*((*ptr2ptr) + i) > greatest)
        {
            greatest = *(*(ptr2ptr) + i);
        }
    }
    printf("The grearest number is %d", greatest);

    return 0;
}
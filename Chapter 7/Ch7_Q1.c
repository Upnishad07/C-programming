/* Q- Write a program to print the address of a variable. Use this address to get the value of
      the variable. */

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of -- a\n");
    scanf("%d", &a);
    int *p = &a;
    printf("The value of integer a is %d\nAnd the address is %p", *p, p);

    return 0;
}
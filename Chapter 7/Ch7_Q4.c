/* Q- Write a program to print the value of a variable i by using a pointer to pointer type variable. */

#include <stdio.h>
int main()
{
    int a;
    int *j = &a;
    int **k = &j;
    printf("Enter the number\n");
    scanf("%d", &a);
    printf("%d", **k);
    
    
    return 0;
}
/* Q-   Write a program that:
1. Declares an integer variable 'x' and initialize it with 50
2. Declares a pointer 'ptr' that points to 'x'
3. Print the value of x, address of x using the pointer, and the value
   pointed by the pointer
4. Pass x to a function using call by value and modify it inside the function
5. Print x in main() to verify it remains unchanged
    */

#include <stdio.h>

int test(int x)
{
    int temp = 12;
    x = temp;
}
int main()
{
    int x = 50;
    int *ptr = &x;
    int **k = &ptr;
    printf("The address of x is %p\nThe value of x is %d\nThe address of pointer points to x is %p\n", ptr, *ptr, k);
    test(x);
    printf("The value of x remain %d", x);

    return 0;
}
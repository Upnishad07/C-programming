/* Q- Write a program having a variable i. Print the address of i. Pass this variable to a function and print
      its address. Are these addresses the same? Why? */
#include <stdio.h>

void fun(int a)
{
    printf("%p\n", &a);
}

int main()
{
    int a = 3;
    int *j = &a;
    printf("%p\n", j);
    fun(a);

    return 0;
}
/* The answer is No, because when you pass a variable to a function by value, the function receives a copy of that value.
 The function creates its own local variable with the same value but stored at a different memory address. */
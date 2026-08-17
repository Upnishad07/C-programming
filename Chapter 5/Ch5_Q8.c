/* Q- Write a function to print a right triangle:

*
* *
* * *
* * * *
* * * * *                    */

#include <stdio.h>
void triangle(int height)
{
    int a = 1;
    int z = 1;
    for (; a <= height; a++)
    {
        for (z = 1; z <= a; z++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int a;
    printf("Enter the value of height\n");
    scanf("%d", &a);
    triangle(a);
    return 0;
}

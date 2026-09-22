/* Q- Write a function to print pyramid AND calculate total sum of all numbers printed:
example -
          1
          2 3
          4 5 6
          7 8 9 10    */

#include <stdio.h>
int pac(int a)
{
    int b = 1;
    int sum = 0;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sum += b;
            printf("%d ", b);
            b++;
        }

        printf("\n");
    }
    return sum;
}

int main()
{
    int a;
    printf("Tell the nth row\n");
    scanf("%d", &a);
    pac(a);
    printf("\n");
    printf("The sum is--\n");
    printf("%d", pac(a));
    return 0;
}

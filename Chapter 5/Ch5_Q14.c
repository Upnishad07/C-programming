/* Q- Write a function to print pyramid AND calculate total sum of all numbers printed:
example -
          1
          2 3
          4 5 6
          7 8 9 10    */

#include <stdio.h>
int pac(int a)
{
    int z = 1;
    int b = 1;
    
    for (int i = 1; i <= a; i++)
    {
        for (int b = 1; b <= z; b++)
        {
            printf("%d ", b);
        }
        printf("\n");
        z++;
        
    }
}

int main()
{
    int a;
    printf("Tell the nth number\n");
    scanf("%d", &a);
    pac(a);
    printf("\n");
    return 0;
}

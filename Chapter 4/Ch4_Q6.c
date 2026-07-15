/* Q- Write a program to calculate the sum of the numbers occurring in the
multiplication table of n. (consider n x 1 to n x 10). */
#include <stdio.h>
int main()
{
    int sum, b=2, c;
    printf("Provide the number \n");
    scanf("%d", &c);
    sum = c;
    while(b<=10)
    {
        sum = sum + (b*c);
        b++;
    }

    printf("%d", sum);
    return 0;
}

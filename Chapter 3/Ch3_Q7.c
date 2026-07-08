/* Q- Write a program to find greatest of four numbers entered by the user.*/
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Provide four numbers\n");
    scanf("%d", &a);
    scanf("%d", &b); 
    scanf("%d", &c);
    scanf("%d", &d);
    int greatest = a;
    if (b> greatest)
    {
        greatest =b;
    }
    if (c> greatest)
    {
        greatest =c;
    }
    if (d> greatest)
    {
        greatest =d;
    }
    if (a==b && a==c && a==d)
    {
        printf("All numbers are equal");
    }
    else
    { 
        printf("The greatest number is %d", greatest);
    }
     return 0;
}

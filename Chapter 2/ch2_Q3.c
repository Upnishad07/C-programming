/* Q3- Write a program to check whether a number is divisible by 97 or not. */


#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    printf("If the no. is divisible then output is 1 , if not then 0 \nThe output is %d ", 
           !(a%97));
    return 0;
}

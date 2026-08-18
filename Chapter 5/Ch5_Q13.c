/* Q- Write a recursive function to find GCD (Greatest Common Divisor) of two numbers using Euclidean algorithm.*/

#include <stdio.h>
int gcd(int a, int b)
{
    int c = a % b;
    if( c == 0)
    {
        return b;
    }
    else {
        return gcd(b, c);
    }

}

int main()
{
    int a, b;
    printf("Enter the two no. you want GCD of --\n");
    scanf("%d", &a);
    scanf("%d", &b);
    int c = gcd(a, b);
    printf("The GCD is %d", c);
    return 0;
}

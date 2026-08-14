/* Q- Write a program using function to find average of three numbers. */

#include <stdio.h>

float average(float a, float b, float c)
{
    float d = (a + b + c);
    return d / 3;
}

int main()
{
    float x, y, z;
    printf("Please Enter three number you want average of\n");
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);
    float m = average(x, y, z);
    printf("The average is %.2f", m);
    return 0;
}

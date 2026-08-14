/* Q- Write a function to convert Celsius temperature into Fahrenheit. */
#include <stdio.h>
float temp(float a)
{
    float fahren = (a * 1.8) + 32;
    return fahren;
}

int main()
{
    float a;
    printf("Enter the Celsius value\n");
    scanf("%f", &a);
    printf("The Fahrenheit value is %0.2f", temp(a));
    return 0;
}

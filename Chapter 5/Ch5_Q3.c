/* Q- Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s2. */

#include <stdio.h>
float force(float mass)
{
    float force = (mass * 9.8);
    return force;
}

int main()
{
    float mass;
    printf("Enter the value of mass\n");
    scanf("%f", &mass);
    printf("The force of attraction is %.2f N", force(mass));
    return 0;
}

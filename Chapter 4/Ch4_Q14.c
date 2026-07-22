/* Q- Take a number and check if it's a perfect number (sum of its divisors, excluding itself, equals 
      the number — e.g., 6 = 1+2+3). */

#include <stdio.h>
int main()
{
   int a, b=1, sum =0;
   printf("Enter the value of the number\n");
   scanf("%d", &a);
   while (b < a)
   {
     if (a%b ==0)
     {
        sum += b;
     }
     b++;
      
   }
   if (a == sum)
   {
    printf("It's a perfect number");
   }
   else {
    printf("It's not a perfect number");
   }
   
   return 0;
}

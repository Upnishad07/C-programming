/* Q- Write a program to find whether a year entered by the user is a leap year or not. 
Take year as an input from the user. */

#include <stdio.h>
int main()
{
  int year;
  printf("Enter the year\n");
  scanf("%d", &year);
  switch (year%4)
  {
  case 0:
    printf("Yes, the year is leap year");
    break;
  
  default:
  printf("No, the is not leap year");
  }
    return 0;
}

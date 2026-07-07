#include <stdio.h>
int main()
{
  int a;
  a<=2;
  printf("How many exams have you passed? from--\n1.Mathematics\n2.Scifence\n");
  scanf("%d", &a);
  if (a == 2)
  {
    printf("Congrulation on passing both exams, you got 45 as your reward!");
   }
  else if(a==1)
  {
    printf("Good you have passed one exam, you 15 as your reward!");
  } 
  else {
    printf("You should work hard but anyway, Better luck next time");
  }
    return 0;
}

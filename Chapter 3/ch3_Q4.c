/* Q- Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user. */

#include <stdio.h>
int main()
{
    int Maths;
    int Physics;
    int Chemistry;
    printf("Please enter your obtained marks in --\n1.Maths\n2.Physics\n3.Chemistry\n");
    scanf("%d", &Maths);
    scanf("%d", &Physics);
    scanf("%d", &Chemistry);
    int Total;
    Total = (Maths + Physics + Chemistry)/3;
    
    if (Total>=40)
    {
      if (Maths>=33 && Physics >=33 && Chemistry >=33)
      {
        printf("Congrulation You passed");
      }
      else if(Maths<33)
      {
        printf("You have have less then 33 in Maths so you have failed ");
      }
      else if(Physics<33)
      {
        printf("You have have less then 33 in Physics so you have failed ");
      }
      else if(Chemistry<33)
      {
        printf("You have have less then 33 in Chemistry so you have failed ");
      }
       }
    else 
    {
       printf("You get less then 40 percent overall so have failed");
    }
    
    return 0;
}

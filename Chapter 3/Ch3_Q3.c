 /* Write a program to find grade of a student given his marks based on below: 
90 – 100 => A 
80 – 90 => B 
70 – 80 => C 
60 – 70 => D 
50 – 60 => E 
<50      -- F */
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your obtain Marks-- \n");
    scanf("%d", &marks);
    if (marks>=90)
    {
        printf("Congrulation you got A grade");
    }
    else if(marks>=80 && marks<90)
    {
        printf("Congrulation you got B");
    }
    else if(marks>=70 && marks<80)
    {
        printf("Good you got C");
    }
    else if (marks>=60 && marks<70)
    {
        printf("You got D, keep improving");
    }
    else if(marks>=50 && marks<60)
    {
        printf("You got E, you should study hard");
    }
    else if (marks<50)
    {
        printf("You got F, you failed");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int a;
    int m;
    int p;
    printf("How many exams have you passed? from--\n1.Mathematics\n2.Science\n");
    scanf("%d", &a);
    switch (a)
    {
    case 2:
        printf("Congrulation you get 45 as reward\n");
        printf("What are your marks in Maths and Science?\n");
        scanf("%d\t", &m); scanf("%d", &p);
        if (m<45)
        {
            printf("You should work on your Maths score\n");
        }
        else {
            printf("Keep it up your maths marks are good!!\n");
        }
        if (p<45)
        {
            printf("and you should work on your science score\n");
        }
        else {
            printf("and keep it up with your physics!!\n");
        }
        break;
    case 1:
        printf("Congrulation you get 15 as your reward");
        break;
    
    default:
        printf("better luck next time");
    }
    return 0;
}

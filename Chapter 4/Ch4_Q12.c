/* Q- Take a number and check if it's a palindrome (reads the same forwards and backwards, like
      121 or 1331).*/

#include <stdio.h>
int main()
{
    int a, z, new_no = 0, la;
    printf("Enter the no. you wanna check\n");
    scanf("%d", &a);
    z = a;
    while (z > 0)
    {
        la = z % 10;
        new_no = new_no*10 + la;
        z = z/10;

        
    }
    if (a == new_no)
{
    printf("It's a palindrome number"); 
}
else {
    printf("It's not a palindrome number");
}

    return 0;
}


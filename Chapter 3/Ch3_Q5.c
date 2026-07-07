/* Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
Income Slab      Tax  
2.5 - 5.0L        5%                       
5.0L - 10.0L     20%                    
Above 10.0L      30%     */              

#include <stdio.h>
int main()
{
    float income;
    printf("Please enter your income\n");
    scanf("%f", &income);
    if (income>1000000)
    {
        printf("Your tax amount is %.2f\n", ((3.0/10)*income));
    }
    else if (income>500000)
    {
        printf("Your tax amount is %.2f\n", (income/5));
    }
    else if (income>250000)
    {
        printf("Your tax amount is %.2f\n", (income/20));
    }
    else 
    {
        printf("No tax amount");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int i;
    float overtime, hours, overtime_pay;
    for(i=1; i<=10; i++)
    {
        printf("Enter the hours worked by employee %d: ", i);
        scanf("%f", &hours);
        if(hours>40)
        {
            overtime = hours - 40;
            overtime_pay = overtime * 12.00;
            printf("Overtime pay of employee %d is Rs. %f\n", i, overtime_pay);
        }
        else
        {
            printf("You have to work for more than 40 hours to get overtime pay.\n");
        }
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    year%4==0 && year%100!=0 || year%400==0 ? printf("The year is leap year") : printf("The year is not leap year");
    return 0;
}
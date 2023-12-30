#include<stdio.h>
int main()
{
    int weight;
    printf("Enter the weight of the boxer: ");
    scanf("%d",&weight);
    if(weight<115)
    {
        printf("The boxer is in flyweight class");
    }
    else if(weight>=115 && weight<=121)
    {
        printf("The boxer is in bantamweight class");
    }
    else if(weight>=122 && weight<=153)
    {
        printf("The boxer is in featherweight class");
    }
    else if(weight>=154 && weight<=189)
    {
        printf("The boxer is in middleweight class");
    }
    else
    {
        printf("The boxer is in heavyweight class");
    }
    return 0;
}
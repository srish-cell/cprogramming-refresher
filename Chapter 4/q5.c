#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three sides of triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
    {
        if(a==b && b==c)
        {
            printf("The triangle is equilateral");
        }
        else if(a==b || b==c || c==a)
        {
            printf("The triangle is isosceles");
        }
        else if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
        {
            printf("The triangle is right angled");
        }
        else
        {
            printf("The triangle is scalene");
        }
    }
    else
    {
        printf("The triangle is not valid");
    }
    return 0;
}
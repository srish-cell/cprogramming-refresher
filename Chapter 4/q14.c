#include<stdio.h>
#include<math.h>
int main()
{
    float angle,sine,cosine;
    printf("Enter the angle in degrees: ");
    scanf("%f",&angle);
    sine=sin(angle);
    cosine=cos(angle);
    sine=sine*sine;
    cosine=cosine*cosine;
    sine+cosine==1 ? printf("Sum of squares of sine and cosine of this angle is equal to 1") : printf("Sum of squares of sine and cosine of this angle is not equal to 1");
    return 0;
}
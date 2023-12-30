#include<stdio.h>
#include<math.h>
int main()
{
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    printf("The value of %d raised to the power of %d is %f\n", x, y, pow(x, y));
    return 0;
}
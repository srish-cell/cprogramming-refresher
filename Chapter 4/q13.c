#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    a>b && a>c ? printf("%d is the greatest number",a) : b>c ? printf("%d is the greatest number",b) : printf("%d is the greatest number",c);
    return 0;
}
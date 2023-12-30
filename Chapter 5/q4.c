#include<stdio.h>
int main()
{
    int i=0;
    while(i<=255)
    {
        printf("The ASCII value of %c is %d\n", i, i);
        i++;
    }
    return 0;
}
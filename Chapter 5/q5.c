/*
Name:Srish
Roll No: CH.EN.U4CYS21081*/
#include <stdio.h>
#include <math.h>
int main()
{   int n=2;
    while(n<500)
    {
        n==(pow(n%10,3)+pow((n/10)%10,3)+pow((n/100)%10,3))?printf("Armstrong Number : %d\n",n):printf("Not an Armstrong Number : %d\n",n);
        n+=1;
    }

    return 0;
}
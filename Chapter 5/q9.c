/*
Name: Srish N
Roll No: CH.EN.U4CYS21081
*/
#include <stdio.h>
#include<math.h>
int main()
{
    int n,r=0,i=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Octal equivalent of %d is ",n);
    while(n>0){
        r+=(n%8)*pow(10,i);
        n/=8;
        i+=1;
    }
    printf("%d.\n",r);
    return 0;
}

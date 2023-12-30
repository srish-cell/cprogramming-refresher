/*
Name: Srish N
Roll No: CH.EN.U4CYS21081
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,l=0,m=0,x;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        printf("Enter number: ");
        scanf("%d",&x);
        l=(x<l)?x:l;
        m=(x>m)?x:m;
        n-=1;
    }
    int range=m-l;
    printf("Range of given numbers %d to %d is %d\n",l,m,range);
    return 0;
}
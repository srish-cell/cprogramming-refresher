#include<stdio.h>
void main(){
    int C,D,temp;
    printf("Enter the value of C and D: ");
    scanf("%d%d",&C,&D);
    temp=C;
    C=D;
    D=temp;
    printf("C=%d and D=%d",C,D);
}
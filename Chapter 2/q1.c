#include<stdio.h>

void main(){
    int a,sum;
    scanf("%d",&a);
    sum=0;
    while(a>0){
        sum=sum+a%10;
        a=a/10;
    }
    printf("Sum of digits is: %d",sum);
}

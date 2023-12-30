#include<stdio.h>

void main(){
    int a,sum;
    scanf("%d",&a);
    sum=0;
    while(a>0){
        sum=sum*10+a%10;
        a=a/10;
    }
    printf("Reverse of number is: %d",sum);
}

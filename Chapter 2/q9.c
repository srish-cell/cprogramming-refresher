#include<stdio.h>
void main(){
    int n;
    printf("Enter the amount: ");
    scanf("%d",&n);
    printf("Rs. 100 notes: %d\n",n/100);
    n=n%100;
    printf("Rs. 50 notes: %d\n",n/50);
    n=n%50;
    printf("Rs. 10 notes: %d\n",n/10);
    n=n%10;
    printf("Rs. 5 notes: %d\n",n/5);
    n=n%5;
    printf("Rs. 2 notes: %d\n",n/2);
    n=n%2;
    printf("Rs. 1 notes: %d\n",n/1);
 }

#include<stdio.h>
#include<math.h>
int main(){
int x,r=0,rem,i=0;
printf("Enter a 5 digit number: ");
scanf("%d",&x);
int n=x;
while(n>0){
    rem=n%10;
    r=r*10+rem;
    n=n/10;
    i+=1;
}
if(x==r){
    printf("IT IS A PALINDROME NUMBER.");
}
else{
    printf("IT IS NOT A PALINDROME.");
}
}

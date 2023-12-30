/*
Name: Srish N
Roll No: CH.EN.U4CYS21081
*/
#include <stdio.h>
int main(){
    int cn=0,cnum=0,cz=0;
    while(1){
        int n;
        printf("Enter a number or -1 to break: ");
        scanf("%d",&n);
        if(n==-1){  //TO BREAK THE LOOP and check if entered number is -1
            cn+=1;
            break;}
        else if(n<0){//To check if entered number is negative
            cn+=1;
        }
        else if(n>0){//To check if entered number is positive
            cnum+=1;
        }
        else if(n==0){//To check if entered number is zero
            cz+=1;
        }
        else{
            printf("Invalid input\n");
        }
    }
    printf("Number of positive numbers: %d\n",cnum);
    printf("Number of negative numbers: %d\n",cn);
    printf("Number of zeros: %d\n",cz);
}

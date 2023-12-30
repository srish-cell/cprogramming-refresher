/*
Name: Srish N
Roll No: CH.EN.U4CYS21081
*/
#include <stdio.h>
#include <stdlib.h>
#
int main(){
    int nm=21;
    while (nm > 0){
        int n;
        printf("Pick 1 0r 2 or 3 or 4 matchsticks: ");
        scanf("%d",&n);
        (nm==1 || nm==n)?printf("Player lose\n"):printf("Remaining matchsticks after player picks: %d\n",nm-n);
        nm-=n;
        int x=rand()%4+1;
        (nm==1 || nm==x)?printf("Computer lose\n"):printf("Remaining matchsticks after computer picks: %d\n",nm-x);
        nm-=x;
    }
}
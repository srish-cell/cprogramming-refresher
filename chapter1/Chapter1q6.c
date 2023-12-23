#include<stdio.h>

void main(){
    int LA[9],BA[9];
    printf("Enter Length of the A0 Paper: ");
    scanf("%d",&LA[0]);
    printf("Enter Breadth of the A0 Paper: ");
    scanf("%d",&BA[0]);
    printf("Size of A0 sheet is %dmm x %dmm.\n",LA[0],BA[0]);
    for(int i=1;i<9;i++){
        if(LA[i-1]>BA[i-1]){
            LA[i]=LA[i-1]/2;
            BA[i]=BA[i-1];
            }
        else{
            BA[i]=BA[i-1]/2;
            LA[i]=LA[i-1];
        }
        printf("Size of A %d sheet is %dmm x %dmm.\n",i,LA[i],BA[i]);
    }
}

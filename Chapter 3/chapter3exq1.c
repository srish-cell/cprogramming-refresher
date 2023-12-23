#include<stdio.h>

void main(){
    float cp,sp,t,tp;
    printf("Enter Cost price of the product: ");
    scanf("%f",&cp);
    printf("Enter the Selling Price of the Product: ");
    scanf("%f",&sp);
    if(cp>sp){
        t=cp-sp;
        tp=t/cp*100;
        printf("Seller has incurred a loss.\nLoss Val: %0.2f\nLoss Percentage: %0.2f",t,tp);
    }
    else{
        t=sp-cp;
        tp=t/cp*100;
        printf("Seller has incurred a Profit.\nProfit Val: %0.2f\nProfit Percentage: %0.2f",t,tp);
    }

}

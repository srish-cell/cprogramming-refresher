#include<stdio.h>
void main(){
    float d,dm,dcm,din,df;
    printf("Enter the distance between two cities in km: ");
    scanf("%f",&d);
    dm=d*1000;
    dcm=dm*100;
    df=dm*3.28;
    din=d/0.0000254;
    printf("Distance between two cities in :\nKilo meters: %0.2f\nMeters: %0.2f\nFeet: %0.2f\nCentimeters: %0.2f\nInches: %0.2f",d,dm,df,dcm,din);
}

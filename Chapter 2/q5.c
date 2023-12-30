#include<stdio.h>
#include<math.h>
void main(){
    float L1,L2,G1,G2,D;
    printf("Enter the latitude and longitude of two places: ");
    scanf("%f%f%f%f",&L1,&L2,&G1,&G2);
    L1=L1*3.14/180;
    L2=L2*3.14/180;
    G1=G1*3.14/180;
    G2=G2*3.14/180;
    D=3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1));
    printf("Distance between two places is: %f",D);
}
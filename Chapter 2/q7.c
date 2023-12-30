#include<stdio.h>
#include<math.h>

void main(){
    float angle;
    printf("Enter the angle: ");
    scanf("%f",&angle);
    printf("Sin(%f) = %f\n",angle,sin(angle));
    printf("Cos(%f) = %f\n",angle,cos(angle));
    printf("Tan(%f) = %f\n",angle,tan(angle));
    printf("Cosec(%f) = %f\n",angle,1/sin(angle));
    printf("Sec(%f) = %f\n",angle,1/cos(angle));
    printf("Cot(%f) = %f\n",angle,1/tan(angle));
}
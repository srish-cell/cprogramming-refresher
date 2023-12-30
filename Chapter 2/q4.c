#include<stdio.h>
#include<math.h>
void main(){
    float x,y,r,theta;
    printf("Enter the cartesian co-ordinates: ");
    scanf("%f%f",&x,&y);
    r=sqrt(x*x+y*y);
    theta=atan(y/x);
    printf("Polar co-ordinates are: (%f,%f)",r,theta);
}
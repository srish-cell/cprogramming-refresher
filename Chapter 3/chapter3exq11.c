#include<stdio.h>
#include<math.h>

void main(){
float x1,y1,r,x2,y2;
printf("Enter X coordinate of center of circle: ");
scanf("%f",&x1);
printf("Enter Y coordinate of center of circle: ");
scanf("%f",&y1);
printf("Enter radius of circle: ");
scanf("%f",&r);
printf("Enter X coordinate of the point: ");
scanf("%f",&x2);
printf("Enter Y coordinate of the point: ");
scanf("%f",&y2);
float d= sqrt(pow((x2-x1),2)+pow((y2-y1),2));
if(d>r){
    printf("Point lies outside the circle.");
}
else if(d<r){
    printf("Point lies inside the circle.");
}
else{
    printf("Point lies on the circle.");
}


}

#include<stdio.h>
#include<math.h>

void main(){
float x1,y1;
printf("Enter X coordinate of center of circle: ");
scanf("%f",&x1);
printf("Enter Y coordinate of center of circle: ");
scanf("%f",&y1);
if(x1==0 && y1==0){
    printf("Point lies on origin.");
}
else if(x1==0 && y1!=0){
    printf("Point lies on y-axis.");
}
else if(x1!=0 && y1==0){
    printf("Point lies on x-axis.");
}
else if(x1>0 && y1<0){
    printf("Point lies on quadrant 4.");
}
else if(x1>0 && y1>0){
    printf("Point lies on quadrant 1.");
}
else if(x1<0 && y1<0){
    printf("Point lies on quadrant 3.");
}
else{
    printf("Point lies on quadrant 2.");
}
}

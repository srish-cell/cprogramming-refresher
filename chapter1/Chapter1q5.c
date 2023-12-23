#include<stdio.h>

void main(){
    float l,b,r,c,ac,ar,pr;
    printf("Enter Length of the rectangle: ");
    scanf("%f",&l);
    printf("Enter Breadth of the rectangle: ");
    scanf("%f",&b);
    printf("Enter Radius of the Circle: ");
    scanf("%f",&r);
    pr=2*(l+b);
    ar=l*b;
    ac=3.14*r*r;
    c=2*3.14*r;
    printf("Report:\n");
    printf("Length of the rectangle: %0.2f\n",l);
    printf("Breadth of the rectangle: %0.2f\n",b);
    printf("Perimeter of the rectangle: %0.2f\n",pr);
    printf("Area of the rectangle: %0.2f\n",ar);
    printf("Radius of the Circle: %0.2f\n",r);
    printf("Circumference of the circle: %0.2f\n",c);
    printf("Area of the Circle: %0.2f\n",ac);
}

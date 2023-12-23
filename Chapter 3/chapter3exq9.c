#include<stdio.h>

void main(){
    float l,b,ar,pr;
    printf("Enter Length of the rectangle: ");
    scanf("%f",&l);
    printf("Enter Breadth of the rectangle: ");
    scanf("%f",&b);

    pr=2*(l+b);
    ar=l*b;

    printf("Report:\n");
    printf("Length of the rectangle: %0.2f\n",l);
    printf("Breadth of the rectangle: %0.2f\n",b);
    printf("Perimeter of the rectangle: %0.2f\n",pr);
    printf("Area of the rectangle: %0.2f\n",ar);
    if(ar>pr){
        printf("the area of the rectangle with length = %f and breadth = %f is greater than its perimeter.",l,b);
    }
    else{
        printf("the Perimeter of the rectangle with length = %f and breadth = %f is greater than its area.",l,b);
    }

}

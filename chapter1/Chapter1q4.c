#include<stdio.h>

void main(){
    float tf,tc;
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f",&tf);
    tc=(tf-32.0)/1.8;
    printf("Temperature Report:\n");
    printf("Temperature in Fahrenheit: %0.2f F\n",tf);
    printf("Temperature in Celcius: %0.2f C\n",tc);
}

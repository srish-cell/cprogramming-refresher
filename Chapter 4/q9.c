#include<stdio.h>
int main()
 {
     float weight,height,bmi;
     printf("Enter the weight of the person: ");
     scanf("%f",&weight);
     printf("Enter the height of the person: ");
     scanf("%f",&height);
     bmi=weight/(height*height);
     if(bmi<15){
         printf("The BMI category is starvation");
 }
     else if(bmi>=15.1 && bmi<=17.5){
         printf("The BMI category is anorexic");
 }
     else if(bmi>=17.6 && bmi<=18.5){
         printf("The BMI category is underweight");
 }
     else if(bmi>=18.6 && bmi<=24.9){
         printf("The BMI category is ideal");
 }
     else if(bmi>=25 && bmi<=25.9){
         printf("The BMI category is overweight");
 }
     else if(bmi>=30 && bmi<=30.9){
         printf("The BMI category is obese");
 }
     else{
         printf("The BMI category is morbidly obese");
 }
     return 0;
 }
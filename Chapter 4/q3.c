#include<stdio.h>
int main()
 {
     int hardness,tensile_strength;
     float carbon_content;
     printf("Enter the hardness: ");
     scanf("%d",&hardness);
     printf("Enter the carbon content: ");
     scanf("%f",&carbon_content);
     printf("Enter the tensile strength: ");
     scanf("%d",&tensile_strength);
     if(hardness>50 && carbon_content<0.7 && tensile_strength>5600)
     {
         printf("The grade of steel is 10");     
     }
     else if(hardness>50 && carbon_content<0.7)
     {
         printf("The grade of steel is 9");
     }
     else if(carbon_content<0.7 && tensile_strength>5600)
     {
         printf("The grade of steel is 8");
     }
     else if(hardness>50 && tensile_strength>5600)
     {
         printf("The grade of steel is 7");
     }
     else if(hardness>50 || carbon_content<0.7 || tensile_strength>5600)
     {
         printf("The grade of steel is 6");
     }
     else
     {
         printf("The grade of steel is 5");
     }
     return 0;
 }
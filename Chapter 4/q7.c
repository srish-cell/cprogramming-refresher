#include<math.h>
#include<stdio.h>
int main()
{
     int r,g,b;
     float c,m,y,k,white;
     printf("Enter the value of red: ");
     scanf("%d",&r);
     printf("Enter the value of green: ");
     scanf("%d",&g);
     printf("Enter the value of blue: ");
     scanf("%d",&b);
     white=r/255.0;
     if(white<g/255.0)
     {
         white=g/255.0;
     }
     if(white<b/255.0)
     {
         white=b/255.0;
     }
     c=(white-r/255.0)/white;
     m=(white-g/255.0)/white;
     y=(white-b/255.0)/white;
     k=1-white;
     printf("The value of cyan is: %f\n",c);
     printf("The value of magenta is: %f\n",m);
     printf("The value of yellow is: %f\n",y);
     printf("The value of black is: %f\n",k);
     return 0;
 }

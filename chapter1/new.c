#include<stdio.h>
void main(){
    int sal,DA,House_Rent,gsal;
    printf("Enter your Basic Pay");
    scanf("%d",&sal);
    DA=0.4*sal;
    House_Rent=0.2*sal;
    gsal=sal+DA+House_Rent;
    printf("Basic Pay: %d\nDearness allowance: %d\n House Rent Allowance: %d\nGross Salary: %d",sal,DA,House_Rent,gsal);
}

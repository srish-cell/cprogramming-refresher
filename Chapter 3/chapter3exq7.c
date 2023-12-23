# include <stdio.h>
int main( )
{
int a,b,c;
printf ( "Enter Angle 1 of triangle: " ) ;
scanf ( "%d", &a ) ;
printf ( "Enter Angle 2 of triangle: " ) ;
scanf ( "%d", &b ) ;
printf ( "Enter Angle 3 of triangle: " ) ;
scanf ( "%d", &c ) ;
if(a+b+c >180){
    printf("It is not a valid triangle.");
}
else{
    printf("It is a valid triangle.");
}
}

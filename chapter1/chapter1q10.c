#include <stdio.h>/* getting input for simple interest*/
int main( )
{
int p, n ;
float r, si ;
printf ( "Enter values of p, n, r" ) ;
scanf ( "%d %d %f", &p, &n, &r ) ;
si = p * n * r / 100 ;
printf ( "%f\n" , si ) ;
return 0 ;
}

# include <stdio.h>
int main( )
{
float s, gs, da, hra ;
printf ( "Enter basic salary " ) ;
scanf ( "%f", &s ) ;
if ( s < 1500 )
{
hra = s * 10 / 100 ;
da = s * 90 / 100 ;
}
else
{
hra = 500 ;
da = s * 98 / 100 ;
}
gs = s + hra + da ;
printf ( "gross salary = Rs. %0.2f\n", gs ) ;
return 0 ;
}

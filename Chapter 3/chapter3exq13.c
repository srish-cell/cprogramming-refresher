# include <stdio.h>
int main( )
{
int i ;
printf ( "Enter either 1 or 2 " ) ;
scanf ( "%d", &i ) ;
if ( i == 1 )
printf ( "i is equal to 1!\n" ) ;
else
{
if ( i == 2 )
printf ( "i is equal to 2\n" ) ;
else
printf ( "i is not 1 or 2!\n" ) ;
}
return 0 ;
}

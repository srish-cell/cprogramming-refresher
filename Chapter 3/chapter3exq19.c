# include <stdio.h>
int main( )
{
if ( 'X' < 'x' )
printf ( "ascii value of X is smaller than that of x\n" ) ;
int j = 10, k = 12 ;
if ( k >= j )
{
int t=k;
k = j ;
j = t ;
}
printf("%d %d",k,j);
return 0;

}

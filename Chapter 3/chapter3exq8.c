# include <stdio.h>
int main( )
{
int a,b,c;
printf ( "Enter A Number: " ) ;
scanf ( "%d", &a ) ;
if(a >0){
    printf("Absolute value of the number is %d.",a);
}
else{
    printf("Absolute value of the number is %d.",a*(-1));
}
}

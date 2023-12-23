# include <stdio.h>
int main( )
{
int a,b,c;
printf ( "Enter age of RAM: " ) ;
scanf ( "%d", &a ) ;
printf ( "Enter age of SHYAM: " ) ;
scanf ( "%d", &b ) ;
printf ( "Enter age of AJAY: " ) ;
scanf ( "%d", &c ) ;
if(a>b &&c>b){
    printf("Shyam is the youngest.");
}
else if(b>a &&c>a){
    printf("RAM is the youngest.");
}
else{
    printf("Ajay is the youngest.");
}
return 0 ;
}

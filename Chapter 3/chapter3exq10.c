#include<stdio.h>
int main( )
{
int x[3],y[3];
for (int i=0;i<3;i++){
    printf ( "Enter coordinates for x%d y%d : ",i,i) ;
    scanf ( "%d %d", &x[i],&y[i]) ;
}
int m1=(y[1]-y[0])/(x[1]-x[0]);
int m2=(y[2]-y[1])/(x[2]-x[1]);
int m3=(y[2]-y[0])/(x[2]-x[0]);
if(m1==m2 && m1==m3){
    printf("All three points lie on same line.");
}
else{
    printf("Three points are not in a straight line.");
}
}

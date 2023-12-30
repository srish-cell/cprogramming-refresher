#include<stdio.h>
int main()
 {
     char ch;
     printf("Enter any character: ");
     scanf("%c",&ch);
     (ch>=97 && ch<=122)?printf("The character is lower case alphabet"):printf("The character is not lower case alphabet");
     printf("\n");
     (ch>=32 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>=123 && ch<=126)?printf("The character is special symbol"):printf("The character is not special symbol");
     return 0;
 }